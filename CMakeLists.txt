cmake_minimum_required(VERSION 3.20)

project(instrumenter)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_COMPILER clang++-14)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

#set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
#set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
#set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)

include_directories(${PROJECT_SOURCE_DIR})
include_directories(/usr/include/llvm-14)
include_directories(/usr/lib/llvm-14/include/)
include_directories(/usr/include/c++/12)
include_directories(/usr/include/)

link_directories(/usr/lib/llvm-14/lib)
link_directories(/usr/lib)
link_directories(/usr/lib64)
link_directories(/usr/lib/gcc/x86_64-linux-gnu/12/)


add_executable(instrumenter main.cpp)

add_library(instCore STATIC main.cpp PyASTVisitor.h PyASTConsumer.h PyASTVisitor.cpp PyASTConsumer.cpp)
#target_include_directories(instrumenter PRIVATE ${PROJECT_SOURCE_DIR})

target_link_libraries(instrumenter PUBLIC instCore clangTooling clangFrontendTool clangFrontend  clangDriver
 clangSerialization  clangCodeGen  clangParse  clangSema
 clangStaticAnalyzerFrontend  clangStaticAnalyzerCheckers  clangStaticAnalyzerCore
 clangAnalysis  clangARCMigrate  clangRewrite  clangRewriteFrontend
 clangEdit  clangAST  clangLex  clangBasic LLVM-14 z3)






#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

#add_custom_target(instrumenter COMMAND make -C ${instrumenter_SOURCE_DIR}
#        CLION_EXE_DIR=${PROJECT_BINARY_DIR})



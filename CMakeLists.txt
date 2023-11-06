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
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fbracket-depth=1024 -std=c++17")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fbracket-depth=1024 -std=c++17 -static")
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -static")
# set(LLVM_ENABLE_RTTI ON CACHE BOOL "Enable run-time type information")
# set(LLVM_ENABLE_TERMINFO OFF CACHE BOOL "Enable terminfo handling")

include_directories(${PROJECT_SOURCE_DIR})
include_directories(/usr/include/llvm-14)
include_directories(/usr/lib/llvm-14/include/)
include_directories(/usr/include/c++/12)
include_directories(/usr/include/)

link_directories(/usr/lib/llvm-14/lib)
link_directories(/usr/lib/llvm-14)
link_directories(/usr/lib)
link_directories(/usr/lib64)
link_directories(/usr/lib/gcc/x86_64-linux-gnu/12/)
link_directories(/usr/lib/gcc/x86_64-linux-gnu/)


add_executable(instrumenter main.cpp)

add_library(instCore STATIC main.cpp PyASTVisitor.h PyASTConsumer.h PyASTVisitor.cpp PyASTConsumer.cpp)
#target_include_directories(instrumenter PRIVATE ${PROJECT_SOURCE_DIR})

target_link_libraries(instrumenter PUBLIC instCore clangTooling clangFrontendTool clangFrontend  clangDriver
 clangSerialization  clangCodeGen  clangParse  clangSema
 clangStaticAnalyzerFrontend  clangStaticAnalyzerCheckers  clangStaticAnalyzerCore
 clangAnalysis  clangARCMigrate  clangRewrite  clangRewriteFrontend
 clangEdit  clangAST  clangLex  clangBasic LLVM)

#set(ZLIB_LIBRARIES /usr/lib/x86_64-linux-gnu/libz.a)
#set(LIBSDTC /usr/lib/gcc/x86_64-linux-gnu/12/libstdc++.a)
#set(GLIBC /usr/lib/x86_64-linux-gnu/libc.a)



# # Get LLVM libraries using llvm-config --libs
# execute_process(
#     COMMAND llvm-config-14 --libs --link-static --system-libs
#     OUTPUT_VARIABLE LLVM_LIBS
#     OUTPUT_STRIP_TRAILING_WHITESPACE
# )

# #print the llvm libs
# message(STATUS "LLVM_LIBS: ${LLVM_LIBS}")

# target_link_libraries(instrumenter PUBLIC 
# instCore 
# clangTooling clangFrontendTool clangFrontend  clangDriver
# clangSerialization  clangCodeGen  clangParse  clangSema
# clangStaticAnalyzerFrontend  clangStaticAnalyzerCheckers  clangStaticAnalyzerCore
# clangAnalysis  clangARCMigrate  clangRewrite  clangRewriteFrontend
# clangEdit  clangAST  clangLex  clangBasic 
# ${LLVM_LIBS}
# )



#Add static flags
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -ltinfo")






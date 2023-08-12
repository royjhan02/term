#include <iostream>
#include <cstdlib>
#include <cstring>
#include <memory>
#include <fstream>
#include <filesystem>

// #include "llvm/Support/Host.h"
#include "llvm/ADT/Triple.h"
#include "clang/Parse/ParseAST.h"
#include "clang/Basic/FileManager.h"
#include "clang/Basic/Diagnostic.h"
#include "clang/Basic/DiagnosticOptions.h"
#include "clang/Basic/TargetOptions.h"
#include "clang/Basic/TargetInfo.h"
#include "clang/Basic/SourceManager.h"
#include "clang/Basic/SourceLocation.h"
#include "clang/Frontend/TextDiagnosticPrinter.h"
#include "clang/Frontend/CompilerInstance.h"
#include "clang/Frontend/FrontendOptions.h"
#include "clang/Lex/Preprocessor.h"
#include "clang/Lex/PreprocessorOptions.h"
#include "clang/AST/RecursiveASTVisitor.h"
#include "clang/AST/ASTConsumer.h"
#include "clang/AST/ASTContext.h"
#include "clang/AST/Stmt.h"
#include "clang/AST/Expr.h"
#include "clang/Rewrite/Core/Rewriter.h"
#include "clang/Rewrite/Frontend/Rewriters.h"

#include "common.h"
#include "PyASTConsumer.h"
    
int instrumentation_flag = 0;

int main(int argc, const char **argv)
{

    const char *myOutputFile = "OutFile.txt";
    const char *myInputFile;

    if (argv[1] == NULL)
    {
        std::cout << "Use ./bin/instrumenter -in <inputfile.c> -[Optional flags: r,c,rc]\n\n";
        return 1;
    }

    std::cout << "\nInput File is : " << argv[2] << "\n";

    // std::string argv3 = argv[3];
    if (argc < 4)
    {
        std::cout << "\n No flag provided. Defaulting to no instrumentation\n";
        instrumentation_flag = 0;
    }
    else if (argc == 4)
    {
        // Check the string value of argv[3] and set instrumentation_flag accordingly
        if (strcmp(argv[3], "-r") == 0)
        {
            std::cout << "\n Recurrent set instrumentation\n";
            instrumentation_flag = 1;
        }
        else if (strcmp(argv[3], "-c") == 0)
        {
            std::cout << "\n CBMC instrumentation\n";
            instrumentation_flag = 2;
        }
        // else if (strcmp(argv[3], "-rc") == 0)
        // {
        //     std::cout << "\n Recurrent set and CBMC instrumentation\n";
        //     instrumentation_flag = 3;
        // }
        else
        {
            std::cout << "\n Invalid flag provided. Defaulting to no instrumentation\n";
            instrumentation_flag = 0;
        }
    }
    else if (argc > 4)
    {
        std::cout << "\n Too many flags provided. Defaulting to no instrumentation\n";
        instrumentation_flag = 0;
    }

    FILE *o_file;
    o_file = fopen(myOutputFile, "w");
    fclose(o_file);

    /*
    freopen(myOutputFile,"a+",stderr);
    std::cerr << "\n 1. Input File is : " << argv[2];
    std::cerr << "\n 2. Output File is : " << myOutputFile;
    fclose(stderr);
     */

    clang::CompilerInstance pyCI;
    pyCI.createDiagnostics(NULL, false);
    auto pyTO = std::make_shared<clang::TargetOptions>();
    // pyTO->Triple = llvm::sys::getDefaultTargetTriple();
    // pyTO->Triple = llvm::Triple::get64BitArchVariant();^
    pyTO->Triple = llvm::Triple::normalize("x86_64-pc-linux-gnu");
    // std::string archName = triple.getArchName().str();

    clang::TargetInfo *pyTI = clang::TargetInfo::CreateTargetInfo(pyCI.getDiagnostics(), pyTO);
    pyCI.setTarget(pyTI);

    clang::LangOptions pyLO;
    pyLO.C17 = 1;
    pyLO.RTTI = 1;
    pyLO.Bool = 1;
    auto &pyPOP = pyCI.getPreprocessorOpts();
    llvm::Triple *pyTriple = new llvm::Triple(pyTO->Triple);
    pyCI.getInvocation().setLangDefaults(pyLO, clang::InputKind(clang::Language::C), *pyTriple, pyPOP.Includes, clang::LangStandard::lang_c17);

    pyCI.createFileManager();
    auto &pyFileManager = pyCI.getFileManager();

    pyCI.createSourceManager(pyFileManager);
    auto &pySourceManager = pyCI.getSourceManager();

    pyCI.createPreprocessor(clang::TU_Module);

    /*AStContext created*/
    clang::ASTContext *pyASTContext;
    pyCI.createASTContext();
    pyASTContext = &pyCI.getASTContext();

    clang::Rewriter pyRewriter;
    pyRewriter.setSourceMgr(pySourceManager, pyCI.getLangOpts());

    /*My own ASTConsumer added to llvm/clang. Class definition in PyASTConsumer.h.
     CompilerInstance for the ASTVisitor class is set in the constructor call of PyASTConsumer using
     set_VisitorCompilerInstance function of PyASTVisitor Class
     */

    //std::stringstream pl_str(argv[4]);
    //unsigned pl_unsigned;
    //pl_str >> pl_unsigned;
    
    pyCI.setASTConsumer(std::make_unique<PyASTConsumer>(&pyCI, myOutputFile, argv[2], pyRewriter));

    // std::cout <<"\nsetASTConsumer";
    // clang::FileEntry* ipFile;
    // ipFile = pyCI.getFileManager().getFile(parsedFile);

    // Input .c file added to llvm/clang flow here. It gets allocated a FileID on disk, which is stored in fid
    llvm::StringRef parsedFile = argv[2];
    llvm::Expected<clang::FileEntryRef> ipFile = pyCI.getFileManager().getFileRef(parsedFile);
    clang::FileID fid;
    if (ipFile)
    {
        fid = pyCI.getSourceManager().createFileID(*ipFile,
                                                   clang::SourceLocation(), clang::SrcMgr::C_User);
        // std::cout << "\n 2. Found File To Parse on disk : " << ipFile->getName().data() << "";
        freopen(myOutputFile, "a+", stderr);
        std::cerr << "\nFound Input File To Parse on disk = " << ipFile->getName().data();
        std::cerr << "\nOutput File = " << myOutputFile << "\n\n";
        fclose(stderr);
        // std::cout << "\nFound File To Parse on disk : " << ipFile->getName().data() << "\n\n";
    }
    pyCI.getSourceManager().setMainFileID(fid);
    pyCI.getDiagnosticClient().BeginSourceFile(pyCI.getLangOpts(), &pyCI.getPreprocessor());

    // The ASt parsed and ASTConsumer is informed as the parsing proceeds
    clang::ParseAST(pyCI.getPreprocessor(), &pyCI.getASTConsumer(), pyCI.getASTContext());

    freopen(myOutputFile, "a+", stderr);
    std::cerr << "\nFinished call to function ParseAST  "
              << " "
              << "\n";
    fclose(stderr);

    // std::cout << "\nFinished call to function ParseAST  " << " "<< "\n";
    pyRewriter.InsertTextAfterToken(mainEndLoc, missingFunctions);

    const clang::RewriteBuffer *RewriteBuf =
        pyRewriter.getRewriteBufferFor(pyCI.getSourceManager().getMainFileID());
    if (RewriteBuf)
        llvm::outs() << std::string(RewriteBuf->begin(), RewriteBuf->end());

    // std::cout << "\n" << argv[2] << "\n";
    // std::string modFileName =  std::filesystem::path(argv[2]).filename();
    std::string modFileStem = std::filesystem::path(argv[2]).stem();
    // std::cout << "\n" << modFileStem << "\n";
    std::string modFile = modFileStem + "_instrumented.c";
    std::ofstream modOut(modFile);
    modOut << std::string(RewriteBuf->begin(), RewriteBuf->end());

    freopen(myOutputFile, "a+", stderr);
    std::cerr << "\nFinished Rewriting  "
              << " "
              << "\n";
    fclose(stderr);

    std::cout << "\nEnd Main  "
              << " "
              << "\n";

    // std::cout << "Printing Variable Information\n";
    // std::cout << "Size of vector = " << visitor_var_type_name->size() <<"\n";
    // for (auto it_var_counter = visitor_var_type_name->begin();
    //      it_var_counter != visitor_var_type_name->end(); it_var_counter++) {
    //     variable_triple l_vt = *it_var_counter;
    //     freopen(myOutputFile,"a+",stderr);
    //     //std::cerr << "\nvar_counter size = " << PyVisitorTree::var_counter.size();
    //     std::cerr << "<" << l_vt.nam << "," << l_vt.typ <<"," << l_vt.scop << ">\n";
    //     fclose(stderr);
    // }
}

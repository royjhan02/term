#ifndef PYASTCONSUMER_H
#define PYASTCONSUMER_H

#include <vector>
#include<map>
#include "clang/AST/ASTConsumer.h"
#include "clang/AST/Decl.h"
#include "clang/AST/DeclGroup.h"
#include "clang/AST/DeclBase.h"
#include "clang/Frontend/CompilerInstance.h"

#include "clang/Rewrite/Core/Rewriter.h"
#include "clang/Rewrite/Frontend/Rewriters.h"

#include "PyASTVisitor.h"

class PyASTConsumer : public clang::ASTConsumer
{
public:
    PyASTConsumer(clang::CompilerInstance *ci, const char *o_file, const char* i_file,
                  clang::Rewriter &pyRewriter);
    PyASTVisitor get_consumerPyASTVisitor();
    std::vector<std::string> py_functionNames;
    std::map<std::string, clang::Decl*> py_functionList;
    virtual bool HandleTopLevelDecl(clang::DeclGroupRef D);

private:
    clang::CompilerInstance *t_pyASTConsumerCompilerInstance;
    PyASTVisitor consumer_pyASTVisitor;
    const char *t_outFile;


};


#endif

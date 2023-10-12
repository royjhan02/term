#include <iostream>
#include "PyASTConsumer.h"
#include "clang/Rewrite/Core/Rewriter.h"
#include "clang/Rewrite/Frontend/Rewriters.h"

PyASTConsumer::PyASTConsumer(clang::CompilerInstance *ci, const char *o_file, const char *i_file, clang::Rewriter &pyRewriter):consumer_pyASTVisitor(pyRewriter)
{

    this->t_outFile = o_file;
    consumer_pyASTVisitor.set_VisitorCompilerInstance(ci,o_file, i_file);
    //consumer_pyASTVisitor.set_VisitorRewriter(pyRewriter);


}

PyASTVisitor PyASTConsumer::get_consumerPyASTVisitor() {
    return consumer_pyASTVisitor;
}

bool PyASTConsumer::HandleTopLevelDecl(clang::DeclGroupRef D)
{
    clang::DeclGroupRef::iterator it_declGroupRef;
    for (it_declGroupRef=D.begin();it_declGroupRef != D.end();it_declGroupRef++){
        clang::Decl *decl = *it_declGroupRef;

      this->consumer_pyASTVisitor.TraverseDecl(*it_declGroupRef);
    }

    return true;
}
#ifndef PYASTVISITOR_H
#define PYASTVISITOR_H

#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <string>
#include <filesystem>
#include <utility>

#include "clang/Lex/Lexer.h"
#include "clang/Analysis/CFG.h"
#include "clang/Basic/FileManager.h"
#include "clang/AST/RecursiveASTVisitor.h"
#include "clang/Frontend/CompilerInstance.h"
#include "clang/Analysis/Analyses/CFGReachabilityAnalysis.h"
#include "clang/Analysis/Analyses/LiveVariables.h"
#include "clang/Analysis/AnalysisDeclContext.h"
#include "clang/StaticAnalyzer/Core/PathSensitive/AnalysisManager.h"
#include "clang/AST/ASTContext.h"
#include "clang/AST/DeclBase.h"
#include "clang/Analysis/AnalysisDeclContext.h"
#include "clang/Analysis/Analyses/LiveVariables.h"
#include "clang-c/Index.h"
#include "llvm/Support/Casting.h"

#include "llvm/ADT/PostOrderIterator.h"
#include "llvm/IR/BasicBlock.h"

#include "clang/Rewrite/Core/Rewriter.h"
#include "clang/Rewrite/Frontend/Rewriters.h"

// #include "z3++.h"

// #include "PyCFG.h"

namespace AVInfo
{
    struct assignment_info
    {
        std::string nam;
        std::string typ;
        unsigned int lin;
    };

    struct scope_info
    {
        std::string vnam;
        std::string vtyp;
        unsigned int vlin;
        unsigned int scopeBeginLine;
        unsigned int scopeEndLine;
    };

}

class PyASTVisitor : public clang::RecursiveASTVisitor<PyASTVisitor>
{
public:
    PyASTVisitor(clang::Rewriter &vRw) : vRewriter(vRw) { std::cout << "\nRewriter Init\n"; }
    // PyASTVisitor() : v_cfg(std::make_unique<clang::CFG>()){}
    void set_VisitorCompilerInstance(clang::CompilerInstance *pyASTVisitorCI, const char *o_file, const char *i_file);

    /* Visitor Functions for different AST elements */
    // bool VisitFunctionDecl(clang::FunctionDecl *v_functionDecl);
    bool VisitCompoundStmt(clang::CompoundStmt *v_compoundStmt);
    // bool VisitBinAssign(clang::BinaryOperator *BO);
    // bool VisitBinaryOperator(clang::BinaryOperator *binOp);
    bool VisitStmt(clang::Stmt *s);
    // bool VisitDeclStmt(clang::DeclStmt *v_declStmt);
    //  bool VisitWhileStmt(clang::WhileStmt *w);
    //  bool VisitForStmt(clang::ForStmt *w);
    //  bool VisitCallExpr(clang::CallExpr *s);
    //   bool VisitVarDecl(clang::VarDecl *v_varDecl);
    bool VisitDecl(clang::Decl *d);
    // bool VisitDeclStmt(clang::DeclStmt *v_declStmt);
    bool VisitVarDecl(clang::VarDecl *v_varDecl);
   //bool av_map_contains(std::string varName, AVInfo::assignment_info av, clang::SourceLocation loc);
    bool print_map(clang::SourceLocation srcLoc, unsigned int lineNum, std::string message);
    //bool print_map_semi(clang::SourceLocation srcLoc, unsigned int lineNum, std::string message);
    bool show_scope_map(std::multimap<std::string, AVInfo::scope_info> scope_map);
    bool check_variable_scope(std::string varName, clang::SourceLocation loc);

    //bool computeVariableScope(clang::VarDecl *v_varDecl);
    // void printLivenessInfo(clang::FunctionDecl* liveness_fd);

private:
    clang::CompilerInstance *visitor_CompilerInstance;
    const char *visitor_OutFile;
    const char *visitor_InputFile;
    // clang::CFG* v_cfg;
    // unsigned loop_unroll;
    clang::Rewriter &vRewriter;

    AVInfo::assignment_info vd;
    std::vector<AVInfo::assignment_info> assignedVariablesInfo;
    std::vector<std::string> assignedVariables;

    std::map<std::string, AVInfo::assignment_info> av_map;
    std::multimap<std::string, AVInfo::scope_info> scope_map;

    //std::list<std::string> scope_list;
    int scope_counter;

    int decl_counter;
};

#endif


#include "PyASTVisitor.h"
#include "common.h"

clang::SourceLocation mainEndLoc;
std::string missingFunctions = "\n\n\n";
std::string callExprType;
std::string callExprName;

void PyASTVisitor::set_VisitorCompilerInstance(clang::CompilerInstance *pyASTVisitorCI, const char *o_file,
                                               const char *i_file)
{
    visitor_CompilerInstance = pyASTVisitorCI;
    visitor_OutFile = o_file;
    visitor_InputFile = i_file;
    this->decl_counter = 0;
}
bool PyASTVisitor::print_map(clang::SourceLocation srcLoc, unsigned int lineNum, std::string message)
{
    std::string insertStr = "";
    insertStr = insertStr + "printf(\"DirNT State @ line" + std::to_string(lineNum) + ": <\");";
    for (auto it = av_map.begin(); it != av_map.end(); ++it)
    {
        std::string t_typ = it->second.typ;
        std::string instvarName = it->second.nam;
        if (t_typ == "int" || t_typ == "long" || t_typ == "short" || t_typ == "long long" || t_typ == "unsigned int" || t_typ == "unsigned long" || t_typ == "unsigned short" || t_typ == "unsigned long long")
            insertStr = insertStr + "printf(\"" + instvarName + "=%d,\"," + instvarName + ");";
        else if (t_typ == "float" || t_typ == "double" || t_typ == "long double")
            insertStr = insertStr + "printf(\"" + instvarName + "=%f,\"," + instvarName + ");";
        else if (t_typ == "char")
            insertStr = insertStr + "printf(\"" + instvarName + "=%c,\"," + instvarName + ");";
    }
    insertStr = insertStr + "printf(\">\\n\");";
    //clang::SourceLocation nextSourceLoc = stmtEndloc;
    vRewriter.InsertTextAfterToken(srcLoc, insertStr);

    return true;
}

bool PyASTVisitor::av_map_contains(std::string varName, AVInfo::assignment_info vd,
                                   clang::SourceLocation stmtEndLoc)
{
    std::pair<std::string, AVInfo::assignment_info> av_pair;
    std::string insertStr = "";
    clang::SourceLocation stmtEndloc = stmtEndLoc;
    if (av_map.find(varName) != av_map.end())
    {
        freopen(visitor_OutFile, "a+", stderr);
        std::cerr << "Variable " << varName << " already exists in the map " << std::endl;
        fclose(stderr);
    }
    else
    {
        freopen(visitor_OutFile, "a+", stderr);
        std::cerr << "Adding Variable " << varName << " to map " << std::endl;
        fclose(stderr);
        av_pair = std::make_pair(varName, vd);
        av_map.insert(av_pair);
    }

    insertStr = insertStr + "printf(\"DirNT State @ line" + std::to_string(vd.lin) + ": <\");";
    for (auto it = av_map.begin(); it != av_map.end(); ++it)
    {
        std::string t_typ = it->second.typ;
        std::string instvarName = it->second.nam;
        if (t_typ == "int" || t_typ == "long" || t_typ == "short" || t_typ == "long long" || t_typ == "unsigned int" || t_typ == "unsigned long" || t_typ == "unsigned short" || t_typ == "unsigned long long")
            insertStr = insertStr + "printf(\"" + instvarName + "=%d,\"," + instvarName + ");";
        else if (t_typ == "float" || t_typ == "double" || t_typ == "long double")
            insertStr = insertStr + "printf(\"" + instvarName + "=%f,\"," + instvarName + ");";
        else if (t_typ == "char")
            insertStr = insertStr + "printf(\"" + instvarName + "=%c,\"," + instvarName + ");";
    }
    insertStr = insertStr + "printf(\">\\n\");";

    clang::SourceManager &v_srcMgr = visitor_CompilerInstance->getSourceManager();
    // clang::SourceLocation stmtEndloc = v_binop->getRHS()->getEndLoc();
    const char *ptr = v_srcMgr.getCharacterData(stmtEndloc);
    const char *end = v_srcMgr.getCharacterData(v_srcMgr.getLocForEndOfFile(v_srcMgr.getMainFileID()));
    clang::Token tok;
    clang::Lexer lexer(stmtEndloc, visitor_CompilerInstance->getLangOpts(), v_srcMgr.getCharacterData(stmtEndloc), ptr, end);
    int counter = 0;
    // lexer.SetKeepWhitespaceMode(true);
    // if (lexer.isKeepWhitespaceMode())
    //     std::cout << "Lexer is in KeepWhitespaceMode" << std::endl;
    // else
    // {
    //     std::cout << "Lexer is not in KeepWhitespaceMode" << std::endl;
    //     lexer.SetKeepWhitespaceMode(true);
    //     if (lexer.isKeepWhitespaceMode())
    //     {
    //         std::cout << "Lexer is now in KeepWhitespaceMode" << std::endl;
    //     }
    // }

    while (ptr != end)
    {
        // freopen(visitor_OutFile, "a+", stderr);
        // std::cerr << "Current stmtEndLoc " << stmtEndloc.printToString(v_srcMgr) << "\n";
        // fclose(stderr);

        if (lexer.getRawToken(stmtEndloc, tok, v_srcMgr, visitor_CompilerInstance->getLangOpts()))
        {
            // std::cout << tok.getName() << "\n";
            // std::cout << "Error in finding token at " << stmtEndloc.printToString(v_srcMgr) << "\n";
            stmtEndloc = stmtEndloc.getLocWithOffset(1);
            break;
        }
        // std::cout << tok.getName() << "\n";
        // std::cout << "Finding ; at " << tok.getName() << " " << counter << "\n";
        // if (*ptr == ';')
        if (tok.is(clang::tok::semi))
        {
            // std::cout << "Found ; at " << stmtEndloc.printToString(v_srcMgr) << "\n";
            // std::cout << counter << "\n";
            // clang::SourceLocation nextSourceLoc = stmtEndloc.getLocWithOffset(2);
            clang::SourceLocation nextSourceLoc = stmtEndloc;
            vRewriter.InsertTextAfterToken(nextSourceLoc, insertStr);
            break;
        }
        stmtEndloc = tok.getLocation().getLocWithOffset(tok.getLength());
        ptr = v_srcMgr.getCharacterData(stmtEndloc);
        //++ptr;
    }
    return true;
}

bool PyASTVisitor::VisitDecl(clang::Decl *d)
{
    clang::SourceManager &SM = visitor_CompilerInstance->getSourceManager();

    if (decl_counter == 0)
    {
        std::string insertStr = "#include <stdio.h>\n";
        // clang::SourceLocation fBeginLoc = d->getBeginLoc();
        clang::SourceLocation fBeginLoc = SM.getLocForStartOfFile(SM.getMainFileID());
        vRewriter.InsertTextBefore(fBeginLoc, insertStr);
        decl_counter++;
    }

    // std::cout << "Found Decl at line = " << visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(d->getBeginLoc()) << "\n";
    return true;
}

// bool PyASTVisitor::VisitFunctionDecl(clang::FunctionDecl *v_functionDecl)
// {

//     // std::string insertStr = "#include <stdio.h>\n";

//     // if (v_functionDecl->isMain())
//     // {
//     //     clang::SourceLocation mainBeginLoc = v_functionDecl->getBeginLoc();
//     //     vRewriter.InsertTextBefore(mainBeginLoc, insertStr);
//     // }
//     return true;
// }

// bool PyASTVisitor::VisitDeclStmt(clang::DeclStmt *v_declStmt)
// {
//      freopen(visitor_OutFile, "a+", stderr);
//      std::cerr << "Found DeclStmt at line = " << visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(v_declStmt->getBeginLoc()) << "\n";
//      fclose(stderr);

//     return true;
// }

// Function that checks if a variable name is in av_map. If not it adds it to the map and instruments the code

bool PyASTVisitor::VisitVarDecl(clang::VarDecl *v_varDecl)
{
    // std::cout << "Found VarDecl at line = " << visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(v_varDecl->getBeginLoc()) << "\n";
    freopen(visitor_OutFile, "a+", stderr);
    std::cerr << "Found VarDecl at line = " << visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(v_varDecl->getBeginLoc()) << "\n";
    fclose(stderr);
    std::string vardecl_name = v_varDecl->getNameAsString();
    std::string vardecl_type = clang::QualType::getAsString(v_varDecl->getType().split(), clang::PrintingPolicy(
                                                                                              visitor_CompilerInstance->getLangOpts()));
    unsigned int vardecl_lineNum = visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(v_varDecl->getBeginLoc());

    if (v_varDecl->hasLocalStorage())
    {
        if (v_varDecl->hasInit())
        {
            freopen(visitor_OutFile, "a+", stderr);
            std::cerr << "VarDecl is Local and has Init "
                      << "\n";
            std::cerr << "VarDecl Name : " << vardecl_name << " \t";
            std::cerr << "VarDecl Type : " << vardecl_type << "\n";
            std::cerr << "VarDecl Line Number : " << vardecl_lineNum << "\n";
            // std::cerr << "VarDecl Init : " << v_varDecl->getInit()->getStmtClassName() << "\n";
            fclose(stderr);

            AVInfo::assignment_info vd_vardecl_info;
            vd_vardecl_info.nam = vardecl_name;
            vd_vardecl_info.typ = vardecl_type;
            vd_vardecl_info.lin = vardecl_lineNum;
            clang::SourceLocation vd_vardecl_loc = v_varDecl->getEndLoc();
            av_map_contains(vardecl_name, vd_vardecl_info, vd_vardecl_loc);
        }
    }

    return true;
}

bool PyASTVisitor::VisitStmt(clang::Stmt *s)
{
    unsigned int lineNum;
    unsigned int blockBeginLineNum;
    unsigned int blockEndLineNum;
    std::pair<std::string, AVInfo::assignment_info> av_pair;
    std::string insertStr = "";

    // std::cout << "Stmt Class Name : " << s->getStmtClassName() << "\n";

    if (auto *v_binop = clang::dyn_cast<clang::BinaryOperator>(s))
    {
        // if (auto *v_compassign = clang::dyn_cast<clang::CompoundAssignOperator>(v_binop))
        // std::cerr << "Stmt Class Name : " << s->getStmtClassName() << "\t";
        if (v_binop->isAssignmentOp() || v_binop->isCompoundAssignmentOp())
        {
            if (v_binop->getOpcode() == clang::BO_Assign)
            {
                lineNum = visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(s->getBeginLoc());
                clang::Expr *lhs = v_binop->getLHS();
                if (clang::DeclRefExpr *refExpr = llvm::dyn_cast<clang::DeclRefExpr>(lhs))
                {
                    std::string t_typ = clang::QualType::getAsString(refExpr->getType().split(), clang::PrintingPolicy(
                                                                                                     visitor_CompilerInstance->getLangOpts()));
                    clang::ValueDecl *decl = refExpr->getDecl();

                    std::string varName = decl->getNameAsString();

                    llvm::StringRef text_ref = clang::Lexer::getSourceText(
                        clang::CharSourceRange::getTokenRange(s->getSourceRange()),
                        visitor_CompilerInstance->getSourceManager(),
                        visitor_CompilerInstance->getLangOpts());
                    std::string stmt_str = text_ref.str();

                    freopen(visitor_OutFile, "a+", stderr);
                    std::cerr << "Statement String : " << stmt_str << "\n";
                    std::cerr << "Line Number of Binary Assignment : " << lineNum << "\n";
                    std::cerr << "Name, Type of LHS : " << varName << "," << t_typ << "\n\n";
                    fclose(stderr);

                    vd.nam = varName; // Name of the variable added to the vector
                    vd.typ = t_typ;   // Type of the variable added to the vector
                    vd.lin = lineNum; // Line number of the variable added to the vector
                    clang::SourceLocation stmtEndloc = v_binop->getRHS()->getEndLoc();
                    av_map_contains(varName, vd, stmtEndloc);
                }

                //     if (av_map.find(varName) != av_map.end())
                //     {
                //         freopen(visitor_OutFile, "a+", stderr);
                //         std::cerr << "Variable " << varName << " already exists in the map " << std::endl;
                //         fclose(stderr);
                //     }
                //     else
                //     {
                //         freopen(visitor_OutFile, "a+", stderr);
                //         std::cerr << "Adding Variable " << varName << " to map " << std::endl;
                //         fclose(stderr);
                //         av_pair = std::make_pair(varName, vd);
                //         av_map.insert(av_pair);
                //     }

                //     // clang::SourceLocation v_srcloc = decl->getSourceRange().getBegin().getLocWithOffset(1);
                //     //  clang::SourceLocation v_srcloc = decl->getSourceRange().getEnd().getLocWithOffset(1);
                //     // lineNum = visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(decl->getBeginLoc());
                //     // colNum=visitor_CompilerInstance->getSourceManager().getExpansionColumnNumber(s->getBeginLoc());
                //     // insertStr = insertStr + "Instrument Here" + varName;

                //     // Construct insertStr for instrumentation with printf for each variable in map
                //     insertStr = insertStr + "printf(\"DirNT State @ line" + std::to_string(lineNum) + ": <\");";
                //     for (auto it = av_map.begin(); it != av_map.end(); ++it)
                //     {
                //         std::string t_typ = it->second.typ;
                //         std::string instvarName = it->second.nam;
                //         // if (it->second.nam == varName)
                //         // {
                //         if (t_typ == "int" || t_typ == "long" || t_typ == "short" || t_typ == "long long" || t_typ == "unsigned int" || t_typ == "unsigned long" || t_typ == "unsigned short" || t_typ == "unsigned long long")
                //             insertStr = insertStr + "printf(\"" + instvarName + "=%d,\"," + instvarName + ");";
                //         else if (t_typ == "float" || t_typ == "double" || t_typ == "long double")
                //             // std::cout << "Float or Double variable found: " << varName << std::endl;
                //             insertStr = insertStr + "printf(\"" + instvarName + "=%f,\"," + instvarName + ");";
                //         else if (t_typ == "char")
                //             insertStr = insertStr + "printf(\"" + instvarName + "=%c,\"," + instvarName + ");";
                //         // }
                //         // else
                //         // {
                //         //     insertStr = insertStr + "printf(\"" + it->second.nam + "=?,\");";
                //         // }
                //     }
                //     insertStr = insertStr + "printf(\">\\n\");";
                // }

                // clang::SourceManager &v_srcMgr = visitor_CompilerInstance->getSourceManager();
                // clang::SourceLocation stmtEndloc = v_binop->getRHS()->getEndLoc();
                // const char *ptr = v_srcMgr.getCharacterData(stmtEndloc);
                // const char *end = v_srcMgr.getCharacterData(v_srcMgr.getLocForEndOfFile(v_srcMgr.getMainFileID()));
                // clang::Token tok;
                // clang::Lexer lexer(stmtEndloc, visitor_CompilerInstance->getLangOpts(), v_srcMgr.getCharacterData(stmtEndloc), ptr, end);
                // // std::cout << "End = " << *end << "\n";
                // int counter = 0;
                // // lexer.SetKeepWhitespaceMode(true);
                // // if (lexer.isKeepWhitespaceMode())
                // //     std::cout << "Lexer is in KeepWhitespaceMode" << std::endl;
                // // else
                // // {
                // //     std::cout << "Lexer is not in KeepWhitespaceMode" << std::endl;
                // //     lexer.SetKeepWhitespaceMode(true);
                // //     if (lexer.isKeepWhitespaceMode())
                // //     {
                // //         std::cout << "Lexer is now in KeepWhitespaceMode" << std::endl;
                // //     }
                // // }

                // while (ptr != end)
                // {
                //     // freopen(visitor_OutFile, "a+", stderr);
                //     // std::cerr << "Current stmtEndLoc " << stmtEndloc.printToString(v_srcMgr) << "\n";
                //     // fclose(stderr);

                //     if (lexer.getRawToken(stmtEndloc, tok, v_srcMgr, visitor_CompilerInstance->getLangOpts()))
                //     {
                //         // std::cout << tok.getName() << "\n";
                //         // std::cout << "Error in finding token at " << stmtEndloc.printToString(v_srcMgr) << "\n";
                //         stmtEndloc = stmtEndloc.getLocWithOffset(1);
                //         break;
                //     }
                //     // std::cout << tok.getName() << "\n";
                //     // std::cout << "Finding ; at " << tok.getName() << " " << counter << "\n";
                //     // if (*ptr == ';')
                //     if (tok.is(clang::tok::semi))
                //     {
                //         // std::cout << "Found ; at " << stmtEndloc.printToString(v_srcMgr) << "\n";
                //         // std::cout << counter << "\n";
                //         // clang::SourceLocation nextSourceLoc = stmtEndloc.getLocWithOffset(2);
                //         clang::SourceLocation nextSourceLoc = stmtEndloc;
                //         vRewriter.InsertTextAfterToken(nextSourceLoc, insertStr);
                //         break;
                //     }
                //     stmtEndloc = tok.getLocation().getLocWithOffset(tok.getLength());
                //     ptr = v_srcMgr.getCharacterData(stmtEndloc);
                //     //++ptr;
                // }

                // // clang::SourceLocation nextLexerLoc = clang::Lexer::getLocForEndOfToken(nextSourceLoc, 0, visitor_CompilerInstance->getSourceManager(), visitor_CompilerInstance->getLangOpts());
                // // clang::SourceLocation nextSourceLoc = s->getSourceRange().getEnd().getLocWithOffset(2);
                // //  s->getSourceRange().getEnd().print(llvm::errs(), visitor_CompilerInstance->getSourceManager());
                // // vRewriter.InsertTextAfterToken(nextSourceLoc, insertStr);
            }
        }
    }
    // else
    // {
    //     // std::cout << "Not a Binary Operator" << std::endl;
    // }

    if (strcmp(s->getStmtClassName(), "WhileStmt") == 0)
    {
        std::cout << "While Statement Found\n";
        clang::WhileStmt *whileStmt = clang::dyn_cast<clang::WhileStmt>(s);
        clang::SourceLocation nextSourceLoc = whileStmt->getBody()->getBeginLoc();
        lineNum = visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(nextSourceLoc);
        print_map(nextSourceLoc, lineNum, "");

        //vRewriter.InsertTextAfterToken(nextSourceLoc,insertStr);

        //     // clang::Expr *cond_expr = whileStmt->getCond();
        //     freopen(visitor_OutFile, "a+", stderr);
        //     std::cerr << "\nWhile Statement ";
        //     fclose(stderr);
        //     insertStr = " __VERIFIER_reached_control(" + std::to_string(lineNum) + ", __FUNCTION__);  ";
        //     vRewriter.InsertText(s->getBeginLoc(), insertStr, true, true);
        //     insertStr = " __VERIFIER_loop_head(" + std::to_string(lineNum) + ", __FUNCTION__);  ";
        //     clang::SourceLocation nextSourceLoc = whileStmt->getBody()->getBeginLoc();
        //     vRewriter.InsertTextAfterToken(nextSourceLoc, insertStr);
    }
    return true;
}

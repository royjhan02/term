
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

int check_variable_type_list(std::string varType)
{
    if (varType == "int" || varType == "long" || varType == "short" || varType == "long long" || varType == "unsigned int" ||
        varType == "unsigned long" || varType == "unsigned short" || varType == "unsigned long long" ||
        varType == "float" || varType == "double" || varType == "long double" ||
        varType == "_Bool" ||
        varType == "char" || varType == "signed char" || varType == "unsigned char" ||
        varType == "char *" || varType == "const char *" || varType == "unsigned char *" || varType == "const unsigned char *") // char * for pointer types
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

bool PyASTVisitor::show_scope_map(std::multimap<std::string, AVInfo::scope_info> scope_map)
{
    #ifdef DEBUG_INST
    freopen(visitor_OutFile, "a+", stderr);
    std::cerr << "show_scope_map :: Printing scope map\n";
    for (auto it = scope_map.begin(); it != scope_map.end(); ++it)
    {
        std::cerr << it->first << " => " << it->second.vnam << " " << it->second.scopeBeginLine << " " << it->second.scopeEndLine << "\n";
    }
    fclose(stderr);
    #endif

    return true;
}

bool PyASTVisitor::check_alloca_map(std::string varName, clang::SourceLocation loc)
{
    //print alloca_map
    #ifdef DEBUG_INST
    freopen(visitor_OutFile, "a+", stderr);
    std::cerr << "check_alloca_map :: Printing alloca map\n";
    for (auto it = alloca_map.begin(); it != alloca_map.end(); ++it)
    {
        std::cerr << it->first << " => " << it->second.vnam << " " << it->second.scopeBeginLine << " " << it->second.scopeEndLine << "\n";
    }
    fclose(stderr);
    #endif

    //iterate over alloca map and check if varName is in alloca map
    for (auto it = alloca_map.begin(); it != alloca_map.end(); ++it)
    {
        if (it->first == varName)
        {
            #ifdef DEBUG_INST
            freopen(visitor_OutFile, "a+", stderr);
            std::cerr << " <<< check_alloca_map :: Variable " << varName << " is in alloca map at line number : " << visitor_CompilerInstance->getSourceManager().getSpellingLineNumber(loc) << " >>> \n";
            fclose(stderr);
            #endif
            return true;
            // if (it->second.scopeBeginLine <= visitor_CompilerInstance->getSourceManager().getSpellingLineNumber(loc) && it->second.scopeEndLine >= visitor_CompilerInstance->getSourceManager().getSpellingLineNumber(loc))
            // {

            //     return true;
            // }
        }
    }
    return false;
}

bool PyASTVisitor::check_variable_scope(std::string varName, clang::SourceLocation loc)
{
    unsigned int lineNum = visitor_CompilerInstance->getSourceManager().getSpellingLineNumber(loc);

    #ifdef DEBUG_INST
    freopen(visitor_OutFile, "a+", stderr);
    std::cerr << "check_variable_scope :: Checking scope of variable " << varName << " at print line number : " << lineNum
              << "\n";
    fclose(stderr);
    #endif

    auto it_mult = scope_map.equal_range(varName);

    for (auto it = it_mult.first; it != it_mult.second; ++it)
    {
        if ((it->second.scopeBeginLine <= lineNum && it->second.scopeEndLine >= lineNum) ||
            (it->second.scopeBeginLine == 0 && it->second.scopeEndLine == 0))
        {
            // std::cerr << " <<< check_variable_scope :: Variable " << varName << " is in scope at print line number : " << visitor_CompilerInstance->getSourceManager().getSpellingLineNumber(loc) << " >>> \n";
            #ifdef DEBUG_INST
            freopen(visitor_OutFile, "a+", stderr);
            std::cerr << " <<< check_variable_scope :: Variable " << varName << " is in scope at print line number : "
                      << visitor_CompilerInstance->getSourceManager().getSpellingLineNumber(loc) << " | scope begin = "
                      << it->second.scopeBeginLine << " | scope end = " << it->second.scopeEndLine << " >>> \n";
            fclose(stderr);
            #endif

            // std::cout << " <<< check_variable_scope :: Variable " << varName << " is in scope at print line number : "
            //           << visitor_CompilerInstance->getSourceManager().getSpellingLineNumber(loc) << " | scope begin = "
            //           << it->second.scopeBeginLine << " | scope end = " << it->second.scopeEndLine << " >>> \n";
            return true;
        }
    }

    // for (auto it = scope_map.begin(); it != scope_map.end(); ++it)
    // {
    //     if (it->first == varName)
    //     {
    //         if (it->second.scopeBeginLine <= lineNum && it->second.scopeEndLine >= lineNum)
    //         {
    //             std::cerr << " <<< check_variable_scope :: Variable " << varName << " is in scope at line number : " << visitor_CompilerInstance->getSourceManager().getSpellingLineNumber(loc) << " >>> \n";
    //             fclose(stderr);
    //             return true;
    //         }
    //     }
    // }
    
    #ifdef DEBUG_INST
    freopen(visitor_OutFile, "a+", stderr);
    std::cerr << " <<< check_variable_scope :: Variable " << varName << " is not in scope at line number : " << visitor_CompilerInstance->getSourceManager().getSpellingLineNumber(loc) << ">>> \n ";
    fclose(stderr);
    #endif

    return false;
}

bool PyASTVisitor::print_cbmc(clang::SourceLocation srcLoc, unsigned int lineNum, std::string message)
{
    #ifdef DEBUG_INST
    freopen(visitor_OutFile, "a+", stderr);
    std::cerr << "Instrumentation flag = " << instrumentation_flag << "\n";
    fclose(stderr);
    #endif


    if (instrumentation_flag == 2)
    {

        // for (auto it = av_map.begin(); it != av_map.end(); ++it)
        // iterate over scope map
        // for (auto it = scope_map.begin(); it != scope_map.end(); ++it)
        std::pair<std::string, std::string> inscope_pair;
        std::vector<std::pair<std::string, std::string>> inscope_vars_pair;

        for (auto it = scope_map.begin(); it != scope_map.end(); it = scope_map.upper_bound(it->first))
        {
            std::string t_typ = it->second.vtyp;
            std::string instvarName = it->second.vnam;

            // freopen(visitor_OutFile, "a+", stderr);
            // std::cerr << "print_cbmc :: Checking scope of  " << instvarName << " of type " << t_typ << "\n";
            // fclose(stderr);

            if (check_variable_scope(instvarName, srcLoc))
            {

                // if (t_typ == "int" || t_typ == "long" || t_typ == "short" || t_typ == "long long" || t_typ == "unsigned int" || t_typ == "unsigned long" || t_typ == "unsigned short" || t_typ == "unsigned long long")
                //     insertStr = insertStr + "printf(\"" + instvarName + "=%d,\"," + instvarName + ");";
                // else if (t_typ == "float" || t_typ == "double" || t_typ == "long double")
                //     insertStr = insertStr + "printf(\"" + instvarName + "=%f,\"," + instvarName + ");";
                // else if (t_typ == "char")
                //     insertStr = insertStr + "printf(\"" + instvarName + "=%c,\"," + instvarName + ");";
                // insertStr = insertStr + "static " + t_typ + " " + instvarName + ";";

                // Only instrument for CBMC if the types are one of the following. If a variable is in scope AND has one of the
                // following types add it to the vector of variables to be instrumented
                // Aeroplane

                // if (t_typ == "int" || t_typ == "long" || t_typ == "short" || t_typ == "long long" || t_typ == "unsigned int" ||
                //     t_typ == "unsigned long" || t_typ == "unsigned short" || t_typ == "unsigned long long" ||
                //     t_typ == "float" || t_typ == "double" || t_typ == "long double" || t_typ == "char")

                // Checking if variable type belongs to list of types to be instrumented
                if (check_variable_type_list(t_typ) == 1)
                {
                    inscope_pair = std::make_pair(instvarName, t_typ);
                    inscope_vars_pair.push_back(inscope_pair);
                }
                if (check_alloca_map(instvarName, srcLoc))
                {
                    inscope_pair = std::make_pair(instvarName, t_typ);
                    inscope_vars_pair.push_back(inscope_pair);
                }
            }
        }

        #ifdef DEBUG_INST
        freopen(visitor_OutFile, "a+", stderr);
        std::cerr << "Begin inscope_var_pairs :: Printing CBMC scope map\n";
        for (auto it = inscope_vars_pair.begin(); it != inscope_vars_pair.end(); ++it)
        {
            std::cerr << it->first << " => " << it->second << "\n";
        }
        std::cerr << "End inscope_var_pairs :: Printing CBMC scope map\n";
        fclose(stderr);
        #endif


        std::string insertStr = "";
        std::string defStr = "";
        std::string eqStrAnd = "";
        std::string eqStrSemi = "";
        std::string eqStrAlloca = "";

        insertStr = insertStr + "printf(\"CBMC Instrumentation @ line" + std::to_string(lineNum) + "\");";
        insertStr = insertStr + "static myBool pStored = myFalse;";
        insertStr = insertStr + "myBool flag=__VERIFIER_nondet_myBool();";

        std::string scope_t_typ;
        std::string scope_instvarName;

        int vec_loc = 0;

        // iterate over inscope_vars_pair
        for (auto it = inscope_vars_pair.begin(); it != inscope_vars_pair.end(); ++it)
        {
            scope_t_typ = it->second;
            scope_instvarName = it->first;

            std::string oinstvarName = "o" + scope_instvarName;
            std::string allocainstvarName = "*" + scope_instvarName;
            std::string allocaoinstvarName = "*" +  oinstvarName;

            defStr = defStr + "static " + scope_t_typ + " " + oinstvarName + ";";
            eqStrSemi = eqStrSemi + oinstvarName + "=" + scope_instvarName + ";";

            if (scope_t_typ=="int *")
            {
                eqStrSemi = eqStrSemi + allocaoinstvarName + "=" + allocainstvarName + ";";
            }

            // eqStrAnd = eqStrAnd + oinstvarName + "==" + scope_instvarName + " && ";
            eqStrAnd = eqStrAnd + oinstvarName + "==" + scope_instvarName;

            if (scope_t_typ=="int *")
            {
                eqStrAnd = eqStrAnd + " && " + allocaoinstvarName + "==" + allocainstvarName;
            }

            if (vec_loc != inscope_vars_pair.size() - 1)
            {
                eqStrAnd = eqStrAnd + " && ";
            }

            #ifdef DEBUG_INST
            freopen(visitor_OutFile, "a+", stderr);
            std::cerr << "eqStrAnd = " << eqStrAnd << "\n";
            fclose(stderr);
            #endif
            
            vec_loc++;
        }
        insertStr = insertStr + defStr;
        insertStr = insertStr + "if(pStored){__CPROVER_assert(!(" + eqStrAnd + "),\"recurrent state found\");} if(flag){" + eqStrSemi + "pStored=myTrue;} ";

        // clang::SourceLocation nextSourceLoc = stmtEndloc;
        // if (!scope_map.empty())
        if (!inscope_vars_pair.empty()) /* Fix for case when eqStrAnd is empty but scope map is not. Check inscope_vars_pair instead*/
        {
            #ifdef DEBUG_INST
            freopen(visitor_OutFile, "a+", stderr);
            std::cout << "Instrumentation flag = " << instrumentation_flag << "\n";
            fclose(stderr);
            #endif

            if (instrumentation_flag == 2)
            {
                if (eqStrAnd.empty())
                    std::cout << "DEBUG: eqStrAnd is empty, but scope list is not\n";
                else
                    vRewriter.InsertTextAfterToken(srcLoc, insertStr);
            }
        }
    }
    return true;
}

bool PyASTVisitor::print_other(clang::SourceLocation srcLoc, unsigned int lineNum, std::string message)
{
    std::string insertStr = "";
    if (message == "ArrayFound")
    {
        insertStr = insertStr + "printf(\"ArrayNT State @ line" + std::to_string(lineNum) + ": Array Found\\n\");";
        vRewriter.InsertTextAfterToken(srcLoc, insertStr);
    }

    return true;
}

bool PyASTVisitor::print_trace(clang::SourceLocation srcLoc, unsigned int lineNum, std::string message)
{
    std::string insertStr = "";
    if (message == "reached_control")
    {
        insertStr = insertStr + " __VERIFIER_reached_control(" + std::to_string(lineNum) + ", \" \");\n";
    }
    else if (message == "loop_head")
    {
        insertStr = insertStr + " __VERIFIER_loop_head(" + std::to_string(lineNum) + ", \" \");\n";
    }
    else if (message == "control_true")
    {
        insertStr = insertStr + " __VERIFIER_control_true(" + std::to_string(lineNum) + ", \" \");\n";
    }
    else if (message == "control_false")
    {
        insertStr = insertStr + " __VERIFIER_control_false(" + std::to_string(lineNum) + ", \" \");\n";
    }
    vRewriter.InsertTextAfterToken(srcLoc, insertStr);

    return true;
}

bool PyASTVisitor::print_map(clang::SourceLocation srcLoc, unsigned int lineNum, std::string message)
{
    std::string insertStr = "";
    insertStr = insertStr + "printf(\"DirNT State @ line" + std::to_string(lineNum) + ": <\");";

    // for (auto it = av_map.begin(); it != av_map.end(); ++it)
    // iterate over scope map
    // for (auto it = scope_map.begin(); it != scope_map.end(); ++it)

    std::pair<std::string, std::string> inscope_pair;
    std::vector<std::pair<std::string, std::string>> inscope_vars_pair;

    for (auto it = scope_map.begin(); it != scope_map.end(); it = scope_map.upper_bound(it->first))
    {
        std::string t_typ = it->second.vtyp;
        std::string instvarName = it->second.vnam;

        #ifdef DEBUG_INST
        freopen(visitor_OutFile, "a+", stderr);
        std::cerr << "print_map :: Checking scope of  " << instvarName << " of type " << t_typ << "\n";
        fclose(stderr);
        #endif

        if (check_variable_scope(instvarName, srcLoc))
        {
            if (t_typ == "_Bool" || t_typ == "int" || t_typ == "long" || t_typ == "short" || t_typ == "long long" || t_typ == "unsigned int" || t_typ == "unsigned long" || t_typ == "unsigned short" || t_typ == "unsigned long long")
                insertStr = insertStr + "printf(\"" + instvarName + "=%d,\"," + instvarName + ");";
            else if (t_typ == "float" || t_typ == "double" || t_typ == "long double")
                insertStr = insertStr + "printf(\"" + instvarName + "=%f,\"," + instvarName + ");";
            else if (t_typ == "char" || t_typ == "signed char" || t_typ == "unsigned char")
                insertStr = insertStr + "printf(\"" + instvarName + "=%c,\"," + instvarName + ");";
            else if (t_typ == "char *" || t_typ == "const char *" || t_typ == "unsigned char *" || t_typ == "const unsigned char *")
                insertStr = insertStr + "printf(\"" + instvarName + "=%p,\",(void *) &" + instvarName + ");"; // print address of char *

            if (check_variable_type_list(t_typ) == 1)
            {
                inscope_pair = std::make_pair(instvarName, t_typ);
                inscope_vars_pair.push_back(inscope_pair);
            }
        }
    }

    insertStr = insertStr + "printf(\">\\n\");";
    // clang::SourceLocation nextSourceLoc = stmtEndloc;
    // if (!scope_map.empty())
    if (!inscope_vars_pair.empty())
    {
        #ifdef DEBUG_INST
        freopen(visitor_OutFile, "a+", stderr);
        std::cerr << "Instrumentation flag = " << instrumentation_flag << "\n";
        std::cerr << "Non-empty inscope_vars_pair map\n";
        fclose(stderr);
        #endif


        if (instrumentation_flag == 1)
        {
            vRewriter.InsertTextAfterToken(srcLoc, insertStr);
        }
    }
    return true;
}

// bool PyASTVisitor::print_map_semi(clang::SourceLocation srcLoc, unsigned int lineNum, std::string message)
// {
//     std::string insertStr = "";
//     insertStr = insertStr + ";printf(\"DirNT State @ line" + std::to_string(lineNum) + ": <\")";
//     for (auto it = av_map.begin(); it != av_map.end(); ++it)
//     {
//         std::string t_typ = it->second.typ;
//         std::string instvarName = it->second.nam;
//         if (t_typ == "int" || t_typ == "long" || t_typ == "short" || t_typ == "long long" || t_typ == "unsigned int" || t_typ == "unsigned long" || t_typ == "unsigned short" || t_typ == "unsigned long long")
//             insertStr = insertStr + ";printf(\"" + instvarName + "=%d,\"," + instvarName + ")";
//         else if (t_typ == "float" || t_typ == "double" || t_typ == "long double")
//             insertStr = insertStr + ";printf(\"" + instvarName + "=%f,\"," + instvarName + ")";
//         else if (t_typ == "char")
//             insertStr = insertStr + ";printf(\"" + instvarName + "=%c,\"," + instvarName + ")";
//     }
//     insertStr = insertStr + ";printf(\">\\n\")";
//     // clang::SourceLocation nextSourceLoc = stmtEndloc;
//     if (!av_map.empty())
//     {
//         vRewriter.InsertTextAfterToken(srcLoc, insertStr);
//     }

//     return true;
// }

bool PyASTVisitor::VisitCompoundStmt(clang::CompoundStmt *v_compoundStmt)
{
    unsigned int cmpndBeginLine = visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(v_compoundStmt->getBeginLoc());
    unsigned int cmpndEndLine = visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(v_compoundStmt->getEndLoc());
    unsigned int cmpndBeginCol = visitor_CompilerInstance->getSourceManager().getExpansionColumnNumber(v_compoundStmt->getBeginLoc());
    unsigned int cmpndEndCol = visitor_CompilerInstance->getSourceManager().getExpansionColumnNumber(v_compoundStmt->getEndLoc());

    std::pair<std::string, AVInfo::scope_info> scope_pair;
    AVInfo::scope_info scope_info;
    std::pair<std::string, AVInfo::alloca_scope_info> alloca_pair;
    AVInfo::alloca_scope_info alloca_info;

    #ifdef DEBUG_INST
    freopen(visitor_OutFile, "a+", stderr);
    std::cerr << "VisitCompoundStmt :: CompoundStmt at line " << cmpndBeginLine << " and column " << cmpndBeginCol << " to line " << cmpndEndLine << " and column " << cmpndEndCol << "\n";
    fclose(stderr);
    #endif


    for (auto substmt : v_compoundStmt->body())
    {
        #ifdef DEBUG_INST
        freopen(visitor_OutFile, "a+", stderr);
        std::cerr << "VisitCompoundStmt :: Substmt is " << substmt->getStmtClassName() << " at line " << visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(substmt->getBeginLoc()) << "\n";
        fclose(stderr);
        #endif


        if (strcmp(substmt->getStmtClassName(), "DeclStmt") == 0)
        {
            clang::DeclStmt *v_declStmt = clang::dyn_cast<clang::DeclStmt>(substmt);
            if (v_declStmt->isSingleDecl())
            {
                // std::cout << "Single DeclStmt\n";
                clang::Decl *v_decl = v_declStmt->getSingleDecl();
                // std::cout << "Decl is " << v_decl->getDeclKindName() << "\n";
                // check if it is a variable declaration and get variable name, line number and column number and type
                if (strcmp(v_decl->getDeclKindName(), "Var") == 0)
                {
                    clang::VarDecl *v_varDecl = clang::dyn_cast<clang::VarDecl>(v_decl);
                    // Check if variable is function pointer
                    if (v_varDecl->getType()->isFunctionPointerType())
                    {
                        // break;
                    }
                    // Check if variable is a char*
                    else if (v_varDecl->getType()->isPointerType())
                    {
                        #ifdef DEBUG_INST
                        freopen(visitor_OutFile, "a+", stderr);
                        std::cerr << "Pointer type is " << v_varDecl->getType().getAsString() << " :: Variable name is " << v_varDecl->getNameAsString() << "\n";
                        fclose(stderr);
                        #endif

                        if (v_varDecl->getType().getAsString()=="int *")
                        {
                            if (clang::Expr *initExpr = v_varDecl->getInit())
                            {
                                #ifdef DEBUG_INST
                                freopen(visitor_OutFile, "a+", stderr);
                                std::cerr << "Found POINTER " << v_varDecl->getType().getAsString() << " :: Variable name is " << v_varDecl->getNameAsString() << "\n";
                                std::cerr << "InitExpr is " << initExpr->getStmtClassName() << "\n";
                                fclose(stderr);
                                #endif
                               //Convert initial expression to a string
                                std::string initExprStr;
                                llvm::raw_string_ostream rso(initExprStr);
                                initExpr->printPretty(rso, nullptr, clang::PrintingPolicy(visitor_CompilerInstance->getLangOpts()));
                                std::string initExprStr2 = rso.str();
                                //if keyword alloca is in found in initExprStr2 set flag
                                if (initExprStr2.find("alloca") != std::string::npos)
                                {
                                    #ifdef DEBUG_INST
                                    freopen(visitor_OutFile, "a+", stderr);
                                    std::cerr << "alloca found in POINTER InitExprStr " << initExprStr2 << "\n";
                                    fclose(stderr);
                                    #endif
                                    std::string varName = v_varDecl->getNameAsString();
                                    std::string varType = v_varDecl->getType().getAsString();
                                    unsigned int varLine = visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(v_varDecl->getBeginLoc());
                                    unsigned int varCol = visitor_CompilerInstance->getSourceManager().getExpansionColumnNumber(v_varDecl->getBeginLoc());
                                    alloca_info.vnam = varName;
                                    alloca_info.vtyp = varType;
                                    alloca_info.vlin = varLine;

                                    // scope_info.scopeBeginLine = cmpndBeginLine;
                                    alloca_info.scopeBeginLine = varLine; // scope begins at the line of declaration.
                                    // Fixes compiler error where variable value is printed before declaration

                                    alloca_info.scopeEndLine = cmpndEndLine;
                                    alloca_pair = std::make_pair(varName, alloca_info);
                                    alloca_map.insert(alloca_pair);
                                }
                                #ifdef DEBUG_INST
                                freopen(visitor_OutFile, "a+", stderr);
                                std::cerr << "POINTER InitExprStr is " << initExprStr2 << "\n";
                                fclose(stderr);
                                #endif
                            }
                            //Get the initial value assigned to the pointer variable declaration
                        }

                        // if (v_varDecl->getType().getAsString()=="char *")
                        // {
                        //     std::cout << "Found char * pointer variable" << "\n";
                        // }
                        //std::cout << "Pointee type is " << v_varDecl->getType()->getPointeeType().getAsString() << " :: Variable name is " << v_varDecl->getNameAsString() << "\n";
                    }
                    

                    std::string varName = v_varDecl->getNameAsString();
                    std::string varType = v_varDecl->getType().getAsString();
                    unsigned int varLine = visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(v_varDecl->getBeginLoc());
                    unsigned int varCol = visitor_CompilerInstance->getSourceManager().getExpansionColumnNumber(v_varDecl->getBeginLoc());

                    // std::string ext_string;
                    // if (v_varDecl->hasExternalStorage())
                    // {
                    //     ext_string = "extern";
                    // }
                    // else
                    // {
                    //     ext_string = "not extern";
                    // }
                    #ifdef DEBUG_INST
                    freopen(visitor_OutFile, "a+", stderr);
                    std::cerr << "VisitCompoundStmt :: Variable (SingleDecl) " << varName << " of type " << varType
                              << " declared at line " << varLine << " and column " << varCol << "\n";
                    fclose(stderr);
                    #endif


                    scope_info.vnam = varName;
                    scope_info.vtyp = varType;
                    scope_info.vlin = varLine;

                    // scope_info.scopeBeginLine = cmpndBeginLine;
                    scope_info.scopeBeginLine = varLine; // scope begins at the line of declaration.
                    // Fixes compiler error where variable value is printed before declaration

                    scope_info.scopeEndLine = cmpndEndLine;
                    scope_pair = std::make_pair(varName, scope_info);
                    scope_map.insert(scope_pair);
                }
            }
            else
            { // If v_declStmt is not singleDecl but something like int x,y
                for (auto decl : v_declStmt->decls())
                {
                    clang::Decl *v_decl = decl;

                    #ifdef DEBUG_INST
                    freopen(visitor_OutFile, "a+", stderr);
                    std::cerr << "Decl is " << v_decl->getDeclKindName() << "\n";
                    fclose(stderr);
                    #endif

                    // // check if it is a variable declaration and get variable name, line number and column number and type
                    if (strcmp(v_decl->getDeclKindName(), "Var") == 0)
                    {
                        clang::VarDecl *v_varDecl = clang::dyn_cast<clang::VarDecl>(v_decl);
                        std::string varName = v_varDecl->getNameAsString();
                        std::string varType = v_varDecl->getType().getAsString();
                        unsigned int varLine = visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(v_varDecl->getBeginLoc());
                        unsigned int varCol = visitor_CompilerInstance->getSourceManager().getExpansionColumnNumber(v_varDecl->getBeginLoc());

                        //     // std::string ext_string;
                        //     // if (v_varDecl->hasExternalStorage())
                        //     // {
                        //     //     ext_string = "extern";
                        //     // }
                        //     // else
                        //     // {
                        //     //     ext_string = "not extern";
                        //     // }
                        #ifdef DEBUG_INST
                        freopen(visitor_OutFile, "a+", stderr);
                        std::cerr << "VisitCompoundStmt :: Variable (Not SingleDecl) " << varName << " of type " << varType
                                  << " declared at line " << varLine << " and column " << varCol << "\n";
                        fclose(stderr);
                        #endif

                        scope_info.vnam = varName;
                        scope_info.vtyp = varType;
                        scope_info.vlin = varLine;

                        //     // scope_info.scopeBeginLine = cmpndBeginLine;
                        scope_info.scopeBeginLine = varLine; // scope begins at the line of declaration.
                                                             //     // Fixes compiler error where variable value is printed before declaration

                        scope_info.scopeEndLine = cmpndEndLine;
                        scope_pair = std::make_pair(varName, scope_info);
                        scope_map.insert(scope_pair);
                    }
                }
            }

            // if (auto v_varDecl = clang::dyn_cast<clang::VarDecl>(substmt))
            // {
            //     std::cout << "Found VarDecl at line = " << visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(v_varDecl->getBeginLoc()) << "\n";
            // }
        }
    }

    show_scope_map(scope_map);
    return true;
}

// bool PyASTVisitor::av_map_contains(std::string varName, AVInfo::assignment_info vd,
//                                    clang::SourceLocation stmtEndLoc)
// {
//     std::pair<std::string, AVInfo::assignment_info> av_pair;
//     std::string insertStr = "";
//     clang::SourceLocation stmtEndloc = stmtEndLoc;
//     if (av_map.find(varName) != av_map.end())
//     {
//         freopen(visitor_OutFile, "a+", stderr);
//         std::cerr << "av_map_contains :: Variable " << varName << " already exists in the map " << std::endl;
//         fclose(stderr);
//     }
//     else
//     {

//         if (vd.typ == "int" || vd.typ == "long" || vd.typ == "short" || vd.typ == "long long" ||
//             vd.typ == "unsigned int" || vd.typ == "unsigned long" || vd.typ == "unsigned short" || vd.typ == "unsigned long long" ||
//             vd.typ == "float" || vd.typ == "double" || vd.typ == "long double" ||
//             vd.typ == "char")
//         {
//             freopen(visitor_OutFile, "a+", stderr);
//             std::cerr << "av_map_contains :: Adding Variable " << varName << " to map " << std::endl;
//             std::cerr << "av_map_contains :: Type of " << vd.nam << " is " << vd.typ << std::endl;
//             fclose(stderr);

//             av_pair = std::make_pair(varName, vd);
//             av_map.insert(av_pair);

//             // Use this to print the map at assignment and declaration with initial values
//             // print_map_semi(stmtEndloc, vd.lin, "");
//         }
//     }

//     return true;
// }

bool PyASTVisitor::VisitFunctionDecl(clang::FunctionDecl *fd)
{
    std::pair<std::string, AVInfo::scope_info> scope_pair;
    AVInfo::scope_info scope_info;
    std::string varName;

    // std::cout << "Found Function Declaration at line = " << visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(fd->getBeginLoc()) << "\n";
    // If function name is not  __VERIFIER_nondet_int then print name of function
    #ifdef DEBUG_INST
    freopen(visitor_OutFile, "a+", stderr);
    std::cerr << "Function name is " << fd->getNameAsString() << "\n";
    fclose(stderr);
    #endif

    clang::Stmt *funcBody = fd->getBody();

    if (funcBody != 0)
    {
        // Get function body
        // Get the begin and end line number of body
        #ifdef DEBUG_INST
        freopen(visitor_OutFile, "a+", stderr);
        std::cerr << "Function body begins at line number = " << visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(funcBody->getBeginLoc()) << "\n";
        std::cerr << "Function body ends at line number = " << visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(funcBody->getEndLoc()) << "\n";
        fclose(stderr);
        #endif

        int func_begin = visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(funcBody->getBeginLoc());
        int func_end = visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(funcBody->getEndLoc());

        // Get the number, name and type of arguments
        int numArgs = fd->getNumParams();
        
        #ifdef DEBUG_INST
        freopen(visitor_OutFile, "a+", stderr);
        std::cerr << "Number of function arguments = " << numArgs << "\n";
        fclose(stderr);
        #endif

        for (int i = 0; i < numArgs; i++)
        {
            #ifdef DEBUG_INST
            freopen(visitor_OutFile, "a+", stderr);
            std::cerr << "Argument " << i << " name = " << fd->getParamDecl(i)->getNameAsString() << "\n";
            std::cerr << "Argument " << i << " type = " << fd->getParamDecl(i)->getType().getAsString() << "\n";
            fclose(stderr);
            #endif


            // Get line and column number of argument
            // std::cout << "Argument " << i << " line number = " << visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(fd->getParamDecl(i)->getBeginLoc()) << "\n";
            // std::cout << "Argument " << i << " column number = " << visitor_CompilerInstance->getSourceManager().getExpansionColumnNumber(fd->getParamDecl(i)->getBeginLoc()) << "\n";
            varName = fd->getParamDecl(i)->getNameAsString();
            scope_info.vnam = fd->getParamDecl(i)->getNameAsString();
            scope_info.vtyp = fd->getParamDecl(i)->getType().getAsString();
            scope_info.vlin = visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(fd->getParamDecl(i)->getBeginLoc());

            // scope_info.scopeBeginLine = cmpndBeginLine;
            scope_info.scopeBeginLine = func_begin;

            // scope begins at the line of declaration.
            // Fixes compiler error where variable value is printed before declaration

            scope_info.scopeEndLine = func_end;
            scope_pair = std::make_pair(varName, scope_info);
            scope_map.insert(scope_pair);
        }
    }

    return true;
}

bool PyASTVisitor::VisitDecl(clang::Decl *d)
{
    clang::SourceManager &SM = visitor_CompilerInstance->getSourceManager();

    if (decl_counter == 0)
    {
        std::string insertStr;
        // if (instrumentation_flag == 1)
        //     insertStr = "#include <stdio.h>\n";
        // else
        if (instrumentation_flag == 2)
        {
            //insertStr = "typedef enum {myFalse, myTrue} myBool; myBool __VERIFIER_nondet_myBool(void);\n";
            insertStr = "typedef enum {myFalse, myTrue} myBool; myBool __VERIFIER_nondet_myBool(void);\n"; 
            insertStr = insertStr + "extern void __VERIFIER_reached_control(int, char const *);\n";
            insertStr = insertStr + "extern void __VERIFIER_loop_head(int, char const *);\n";        
            insertStr = insertStr + "extern void __VERIFIER_control_true(int, char const *);\n";        
            insertStr = insertStr + "extern void __VERIFIER_control_false(int, char const *);\n";        
        }

        // insertStr = "#include <stdio.h>\n";
        //  clang::SourceLocation fBeginLoc = d->getBeginLoc();
        clang::SourceLocation fBeginLoc = SM.getLocForStartOfFile(SM.getMainFileID());
        vRewriter.InsertTextBefore(fBeginLoc, insertStr);
        decl_counter++;
    }

    // std::cout << "Found Decl at line = " << visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(d->getBeginLoc()) << "\n";
    return true;
}

// Function that checks if a variable name is in av_map. If not it adds it to the map and instruments the code

bool PyASTVisitor::VisitVarDecl(clang::VarDecl *v_varDecl)
{
    std::pair<std::string, AVInfo::scope_info> scope_pair;
    AVInfo::scope_info scope_info;

    // std::cout << "Found VarDecl at line = " << visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(v_varDecl->getBeginLoc()) << "\n";
    #ifdef DEBUG_INST
    freopen(visitor_OutFile, "a+", stderr);
    std::cerr << "VisitVarDecl :: Found VarDecl at line = " << visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(v_varDecl->getBeginLoc()) << "\n";
    fclose(stderr);
    #endif


    // computeVariableScope(v_varDecl);

    std::string vardecl_name = v_varDecl->getNameAsString();
    std::string vardecl_type = clang::QualType::getAsString(v_varDecl->getType().split(), clang::PrintingPolicy(
                                                                                              visitor_CompilerInstance->getLangOpts()));
    unsigned int vardecl_lineNum = visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(v_varDecl->getBeginLoc());


    if (v_varDecl->hasGlobalStorage() && !(v_varDecl->hasExternalStorage()))
    {
        #ifdef DEBUG_INST
        freopen(visitor_OutFile, "a+", stderr);
        std::cerr << "VisitVarDecl :: VarDecl is Global and not extern"
                  << "\n";
        std::cerr << "VisitVarDecl :: VarDecl Name : " << vardecl_name << " \t";
        std::cerr << "VisitVarDecl :: VarDecl Type : " << vardecl_type << "\t";
        std::cerr << "VisitVarDecl :: VarDecl Line Number : " << vardecl_lineNum << "\n";
        fclose(stderr);
        #endif

        scope_info.vnam = vardecl_name;
        scope_info.vtyp = vardecl_type;
        scope_info.vlin = vardecl_lineNum;

        scope_info.scopeBeginLine = 0; // global scope (excludes extern variables)
        scope_info.scopeEndLine = 0;   // global scope (excludes extern variables)
        scope_pair = std::make_pair(vardecl_name, scope_info);
        scope_map.insert(scope_pair);
    }


    return true;
}

bool PyASTVisitor::hasArrayAccessInExpression(clang::Expr *expr) {
    if (!expr) {
        // If the current expression is null, it does not contain an array access.
        return false;
    }

    if (clang::ArraySubscriptExpr *rArraySubExpr = clang::dyn_cast<clang::ArraySubscriptExpr>(expr))
    {
        // If the current expression is an ArraySubscriptExpr, we found an array access.
        #ifdef DEBUG_INST
        freopen(visitor_OutFile, "a+", stderr);
        std::cerr << "hasArrayAccessInExpression :: ArraySubscriptExpr at line " << visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(expr->getBeginLoc()) << "\n";
        fclose(stderr);
        #endif

        return true;
    }

    // Check if stmt is a ternary operator (conditional operator)
    if (clang::ConditionalOperator *condOp = clang::dyn_cast<clang::ConditionalOperator>(expr))
    {
        // std::cout << "getArrayUseInLoop :: ConditionalOperator at line " << visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(stmt->getBeginLoc()) << "\n";
        //clang::ConditionalOperator *condOp = clang::dyn_cast<clang::ConditionalOperator>(stmt);
        clang::Expr *cond = condOp->getCond();
        clang::Expr *trueExpr = condOp->getTrueExpr();
        clang::Expr *falseExpr = condOp->getFalseExpr();

        #ifdef DEBUG_INST
        freopen(visitor_OutFile, "a+", stderr);
        std::cerr << "hasArrayAccessInExpression :: ConditionalOperator at line " << visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(condOp->getBeginLoc()) << "\n";
        std::cerr << "hasArrayAccessInExpression :: ConditionalOperator :: Cond at line " << visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(cond->getBeginLoc()) << "\n";
        std::cerr << "hasArrayAccessInExpression :: ConditionalOperator :: TrueExpr at line " << visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(trueExpr->getBeginLoc()) << "\n";
        std::cerr << "hasArrayAccessInExpression :: ConditionalOperator :: FalseExpr at line " << visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(falseExpr->getBeginLoc()) << "\n";
        fclose(stderr);
        #endif

        if (hasArrayAccessInExpression(cond))
        {
            #ifdef DEBUG_INST
            freopen(visitor_OutFile, "a+", stderr);
            std::cerr << "hasArrayAccessInExpression:: ConditionalOperator at line " << visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(cond->getBeginLoc()) << "\n";
            fclose(stderr);
            #endif

            return true;
        }

        if (hasArrayAccessInExpression(trueExpr))
        {
            #ifdef DEBUG_INST
            freopen(visitor_OutFile, "a+", stderr);
            std::cerr << "hasArrayAccessInExpression:: ConditionalOperator at line " << visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(trueExpr->getBeginLoc()) << "\n";
            fclose(stderr);
            #endif

            return true;
        }

        if (hasArrayAccessInExpression(falseExpr))
        {
            #ifdef DEBUG_INST
            freopen(visitor_OutFile, "a+", stderr);
            std::cerr << "hasArrayAccessInExpression:: ConditionalOperator at line " << visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(falseExpr->getBeginLoc()) << "\n";
            fclose(stderr);
            #endif

            return true;
        }
    }

    if (clang::ImplicitCastExpr *rImpCastExpr = clang::dyn_cast<clang::ImplicitCastExpr>(expr))
    {
        if (clang::ArraySubscriptExpr *rImparraySubExpr = clang::dyn_cast<clang::ArraySubscriptExpr>(rImpCastExpr->IgnoreImplicit()))
        {
            // If the current expression is an ArraySubscriptExpr, we found an array access.
            #ifdef DEBUG_INST
            freopen(visitor_OutFile, "a+", stderr);
            std::cerr << "hasArrayAccessInExpression :: ArraySubscriptExpr at line " << visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(rImparraySubExpr->getBeginLoc()) << "\n";
            fclose(stderr);
            #endif

            return true;
        }

        if (clang::BinaryOperator *binOp = clang::dyn_cast<clang::BinaryOperator>(rImpCastExpr->IgnoreImplicit()))
        {
            //std::cout << "hasArrayAccessInExpression :: BinOp at line " << visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(rImpCastExpr->getBeginLoc()) << "\n";
            #ifdef DEBUG_INST
            freopen(visitor_OutFile, "a+", stderr);
            std::cerr << "hasArrayAccessInExpression :: ImplicitCast :: BinaryOperator at line " << visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(rImpCastExpr->getBeginLoc()) << "\n";
            std::cerr << "LHS is " << binOp->getLHS()->getStmtClassName() << " RHS is " << binOp->getRHS()->getStmtClassName() << "\n";
            fclose(stderr);
            #endif

            //  If the current expression is a BinaryOperator, recursively check its operands.
            //if (hasArrayAccessInExpression(binOp->getLHS()) || hasArrayAccessInExpression(binOp->getRHS()))
            if (hasArrayAccessInExpression(binOp->getLHS()))
            {
                std::cout << "hasArrayAccessInExpression :: ImplicitCast :: BinOp LHS at line " << visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(rImpCastExpr->getBeginLoc()) << "\n";
                return true;
            }
            if (hasArrayAccessInExpression(binOp->getRHS()))
            {
                std::cout << "hasArrayAccessInExpression :: ImplicitCast:: BinOp RHS at line " << visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(rImpCastExpr->getBeginLoc()) << "\n";
                return true;
            }

        }

        if (clang::UnaryOperator *unOp = clang::dyn_cast<clang::UnaryOperator>(rImpCastExpr->IgnoreImplicit()))
        {
            #ifdef DEBUG_INST
            freopen(visitor_OutFile, "a+", stderr);
            std::cerr << "hasArrayAccessInExpression :: ImplicitCaset :: UnaryOperator at line " << visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(rImpCastExpr->getBeginLoc()) << "\n";
            fclose(stderr);
            #endif
            //  If the current expression is a UnaryOperator, recursively check its operand.
            if (hasArrayAccessInExpression(unOp->getSubExpr()))
            {
                return true;
            }
        }
        
        //Handle arraysubsctiptexpr in parenthesis
        if (clang::ParenExpr *parenExpr = clang::dyn_cast<clang::ParenExpr>(rImpCastExpr->IgnoreImplicit()))
        {
            #ifdef DEBUG_INST
            freopen(visitor_OutFile, "a+", stderr);
            std::cerr << "hasArrayAccessInExpression :: ImplicitCast:: ParenExpr at line " << visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(rImpCastExpr->getBeginLoc()) << "\n";
            fclose(stderr);
            #endif
            if (hasArrayAccessInExpression(parenExpr->getSubExpr()))
            {
                return true;
            }

            if (clang::BinaryOperator *binOp = clang::dyn_cast<clang::BinaryOperator>(parenExpr))
            {
                // std::cout << "hasArrayAccessInExpression :: BinOp at line " << visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(rImpCastExpr->getBeginLoc()) << "\n";
                #ifdef DEBUG_INST
                freopen(visitor_OutFile, "a+", stderr);
                std::cerr << "hasArrayAccessInExpression :: ParenExpr :: BinaryOperator at line " << visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(rImpCastExpr->getBeginLoc()) << "\n";
                std::cerr << "LHS is " << binOp->getLHS()->getStmtClassName() << " RHS is " << binOp->getRHS()->getStmtClassName() << "\n";
                fclose(stderr);
                #endif

                //  If the current expression is a BinaryOperator, recursively check its operands.
                if (hasArrayAccessInExpression(binOp->getLHS()) || hasArrayAccessInExpression(binOp->getRHS()))
                {
                    return true;
                }
            }
            if (clang::UnaryOperator *unOp = clang::dyn_cast<clang::UnaryOperator>(parenExpr))
            {
                #ifdef DEBUG_INST
                freopen(visitor_OutFile, "a+", stderr);
                std::cerr << "hasArrayAccessInExpression :: ParenExpr :: UnaryOperator at line " << visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(rImpCastExpr->getBeginLoc()) << "\n";
                fclose(stderr);
                #endif
                //  If the current expression is a UnaryOperator, recursively check its operand.
                if (hasArrayAccessInExpression(unOp->getSubExpr()))
                {
                    return true;
                }
            }
        }
    }

    if (clang::BinaryOperator *binOp = clang::dyn_cast<clang::BinaryOperator>(expr))
    {
        //std::cout << "hasArrayAccessInExpression :: BinOp at line " << visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(expr->getBeginLoc()) << "\n";
        #ifdef DEBUG_INST
        freopen(visitor_OutFile, "a+", stderr);
        std::cerr << "hasArrayAccessInExpression :: BinaryOperator at line " << visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(expr->getBeginLoc()) << "\n";
        fclose(stderr);
        #endif
        //  If the current expression is a BinaryOperator, recursively check its operands.
        // if (hasArrayAccessInExpression(binOp->getLHS()) || hasArrayAccessInExpression(binOp->getRHS()))
        // {
        //     return true;
        // }
        if (hasArrayAccessInExpression(binOp->getLHS()))
        {
            std::cout << "hasArrayAccessInExpression :: BinOp LHS at line " << visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(expr->getBeginLoc()) << "\n";
            return true;
        }
        if (hasArrayAccessInExpression(binOp->getRHS()))
        {
            std::cout << "hasArrayAccessInExpression :: BinOp RHS at line " << visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(expr->getBeginLoc()) << "\n";
            return true;
        }
    }

    if (clang::UnaryOperator *unOp = clang::dyn_cast<clang::UnaryOperator>(expr))
    {
        #ifdef DEBUG_INST
        freopen(visitor_OutFile, "a+", stderr);
        std::cerr << "hasArrayAccessInExpression :: UnaryOperator at line " << visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(expr->getBeginLoc()) << "\n";
        fclose(stderr);
        #endif
        //  If the current expression is a UnaryOperator, recursively check its operand.
        if (hasArrayAccessInExpression(unOp->getSubExpr()))
        {
            return true;
        }
    }

    if (clang::ParenExpr *parenExpr = clang::dyn_cast<clang::ParenExpr>(expr))
    {
        #ifdef DEBUG_INST
        freopen(visitor_OutFile, "a+", stderr);
        std::cerr << "hasArrayAccessInExpression :: ParenExpr at line " << visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(expr->getBeginLoc()) << "\n";
        fclose(stderr);
        #endif

        if (hasArrayAccessInExpression(parenExpr->getSubExpr()))
        {
            return true;
        }

        //return true;
    }


    return false;
}




// Check if an array has been used in a loop and turns off  instrumentation
bool PyASTVisitor::getArrayUseInLoop(clang::Stmt *s, std::string loopType)
{

    clang::Stmt *BodyStmt;
    // std::cout << "getArrayUseInLoop :: Loop type is " << loopType << "\n";

    if (loopType == "WhileStmt")
    {
        clang::WhileStmt *whileStmt = clang::dyn_cast<clang::WhileStmt>(s);
        BodyStmt = whileStmt->getBody();

        #ifdef DEBUG_INST
        freopen(visitor_OutFile, "a+", stderr);
        std::cerr << "getArrayUseInLoop :: Stmt Body of " << BodyStmt->getStmtClassName() << "\n";
        fclose(stderr);
        #endif
    }
    else if (loopType == "ForStmt")
    {
        clang::ForStmt *forStmt = clang::dyn_cast<clang::ForStmt>(s);
        BodyStmt = forStmt->getBody();

        #ifdef DEBUG_INST
        freopen(visitor_OutFile, "a+", stderr);
        std::cerr << "getArrayUseInLoop :: Stmt Body of " << BodyStmt->getStmtClassName() << "\n";
        fclose(stderr);
        #endif
    }
    else if (loopType == "DoStmt")
    {
        clang::DoStmt *doStmt = clang::dyn_cast<clang::DoStmt>(s);
        BodyStmt = doStmt->getBody();

        #ifdef DEBUG_INST
        freopen(visitor_OutFile, "a+", stderr);
        std::cerr << "getArrayUseInLoop :: Stmt Body of " << BodyStmt->getStmtClassName() << "\n";
        fclose(stderr);
        #endif
    }
    else
    {
        #ifdef DEBUG_INST
        freopen(visitor_OutFile, "a+", stderr);
        std::cerr << "getArrayUseInLoop :: Invalid loop type\n";
        fclose(stderr);
        #endif

        return false;
    }

    // Iterate over BodyStmt to check if it contains array use
    if (BodyStmt != 0)
    {
        for (auto it = BodyStmt->child_begin(); it != BodyStmt->child_end(); ++it)
        {
            clang::Stmt *stmt = *it;
            #ifdef DEBUG_INST
            freopen(visitor_OutFile, "a+", stderr);
            std::cerr << "getArrayUseInLoop :: Stmt at line " << visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(stmt->getBeginLoc())
                      << " is " << stmt->getStmtClassName() << "\n";
            fclose(stderr);
            #endif

            if (strcmp(stmt->getStmtClassName(), "ConditionalOperator") == 0)
            {
                // std::cout << "getArrayUseInLoop :: ConditionalOperator at line " << visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(stmt->getBeginLoc()) << "\n";
                clang::ConditionalOperator *condOp = clang::dyn_cast<clang::ConditionalOperator>(stmt);
                clang::Expr *cond = condOp->getCond();
                clang::Expr *trueExpr = condOp->getTrueExpr();
                clang::Expr *falseExpr = condOp->getFalseExpr();

                #ifdef DEBUG_INST
                freopen(visitor_OutFile, "a+", stderr);
                std::cerr << "getArrayUseInLoop :: ConditionalOperator at line " << visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(condOp->getBeginLoc()) << "\n";
                std::cerr << "getArrayUseInLoop :: ConditionalOperator :: Cond at line " << visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(cond->getBeginLoc()) << "\n";
                std::cerr << "getArrayUseInLoop :: ConditionalOperator :: TrueExpr at line " << visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(trueExpr->getBeginLoc()) << "\n";
                std::cerr << "getArrayUseInLoop :: ConditionalOperator :: FalseExpr at line " << visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(falseExpr->getBeginLoc()) << "\n";
                fclose(stderr);
                #endif

                if (hasArrayAccessInExpression(cond))
                {
                    #ifdef DEBUG_INST
                    freopen(visitor_OutFile, "a+", stderr);
                    std::cerr << "getArrayUseInLoop :: hasArrayAccessInExpression:: ConditionalOperator at line " << visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(cond->getBeginLoc()) << "\n";
                    fclose(stderr);
                    #endif

                    return true;
                }

                if (hasArrayAccessInExpression(trueExpr))
                {
                    #ifdef DEBUG_INST
                    freopen(visitor_OutFile, "a+", stderr);
                    std::cerr << "getArrayUseInLoop :: hasArrayAccessInExpression:: ConditionalOperator at line " << visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(trueExpr->getBeginLoc()) << "\n";
                    fclose(stderr);
                    #endif

                    return true;
                }

                if (hasArrayAccessInExpression(falseExpr))
                {
                    #ifdef DEBUG_INST
                    freopen(visitor_OutFile, "a+", stderr);
                    std::cerr << "getArrayUseInLoop :: hasArrayAccessInExpression:: ConditionalOperator at line " << visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(falseExpr->getBeginLoc()) << "\n";
                    fclose(stderr);
                    #endif

                    return true;
                }
            }

            //At this level the BinaryOperator expected is Assignment =
            if (strcmp(stmt->getStmtClassName(), "BinaryOperator") == 0)
            {
                clang::BinaryOperator *binOp = clang::dyn_cast<clang::BinaryOperator>(stmt);
                clang::Expr *lhs = binOp->getLHS();
                clang::Expr *rhs = binOp->getRHS();

                clang::ImplicitCastExpr *rImpCastExpr = clang::dyn_cast<clang::ImplicitCastExpr>(rhs);
                
                #ifdef DEBUG_INST
                freopen(visitor_OutFile, "a+", stderr);
                std::cerr << "getArrayUseInLoop :: LHS at " << visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(lhs->getBeginLoc())
                          << " is " << lhs->getStmtClassName() << "\n";

                std::cerr << "getArrayUseInLoop :: RHS at " << visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(rhs->getBeginLoc())
                          << " is " << rhs->getStmtClassName() << "\n";
                fclose(stderr);
                #endif

                if (hasArrayAccessInExpression(rhs))
                {
                    #ifdef DEBUG_INST
                    freopen(visitor_OutFile, "a+", stderr);
                    std::cerr << "ArraySubscriptExpr in rhs\n";
                    //std::cerr << "getArrayUseInLoop :: hasArrayAccessInExpression:: ArraySubscriptExpr at line " << visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(rImpCastExpr->getBeginLoc()) << "\n";
                    std::cerr << "getArrayUseInLoop :: hasArrayAccessInExpression:: ArraySubscriptExpr at line " << visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(rhs->getBeginLoc()) << "\n";
                    fclose(stderr);
                    #endif

                    return true;
                }


                if (clang::ArraySubscriptExpr *larraySubExpr = clang::dyn_cast<clang::ArraySubscriptExpr>(lhs))
                {
                    #ifdef DEBUG_INST
                    freopen(visitor_OutFile, "a+", stderr);
                    std::cerr << "lhs is ArraySubscriptExpr\n";
                    std::cerr << "getArrayUseInLoop :: ArraySubscriptExpr at line " << visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(larraySubExpr->getBeginLoc()) << "\n";
                    fclose(stderr);
                    #endif

                    return true;
                }
            }
        }
    }
    return false;
}

// Visitor for ForStmt that retrieves the variable declared in this "for" statement, if any.
bool PyASTVisitor::getDeclInForStmt(clang::ForStmt *v_forStmt)
{

    clang::Stmt *v_forBodyStmt = v_forStmt->getBody();
    unsigned int forBeginLine = visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(v_forBodyStmt->getBeginLoc());
    unsigned int forEndLine = visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(v_forBodyStmt->getEndLoc());
    unsigned int forBeginCol = visitor_CompilerInstance->getSourceManager().getExpansionColumnNumber(v_forBodyStmt->getBeginLoc());
    unsigned int forEndCol = visitor_CompilerInstance->getSourceManager().getExpansionColumnNumber(v_forBodyStmt->getEndLoc());

    std::pair<std::string, AVInfo::scope_info> scope_pair;
    AVInfo::scope_info scope_info;

    if (v_forStmt->getInit())
    {
        // std::cout << "Init of ForStmt\n";
        clang::Stmt *v_forInitStmt = v_forStmt->getInit();
        // std::cout << "Init Stmt is " << v_forInitStmt->getStmtClassName() << "\n";
        const clang::DeclStmt *v_declStmt = clang::dyn_cast<clang::DeclStmt>(v_forInitStmt);

        // if (v_forStmt->getConditionVariableDeclStmt())
        //     const clang::DeclStmt *v_declStmt = v_forStmt->getConditionVariableDeclStmt();

        if (v_declStmt == 0)
        {
            #ifdef DEBUG_INST
            freopen(visitor_OutFile, "a+", stderr);
            std::cerr << "VisitForStmt :: No Decl Stmt found in Init\n";
            fclose(stderr);
            #endif
        }
        else
        if (v_declStmt->isSingleDecl())
        {
            const clang::Decl *v_decl = v_declStmt->getSingleDecl();
            // check if it is a variable declaration and get variable name, line number and column number and type
            if (strcmp(v_decl->getDeclKindName(), "Var") == 0)
            {
                const clang::VarDecl *v_varDecl = clang::dyn_cast<clang::VarDecl>(v_decl);
                // Check if variable is function pointer
                if (v_varDecl->getType()->isFunctionPointerType())
                {
                    // break;
                }
                std::string varName = v_varDecl->getNameAsString();
                std::string varType = v_varDecl->getType().getAsString();
                unsigned int varLine = visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(v_varDecl->getBeginLoc());
                unsigned int varCol = visitor_CompilerInstance->getSourceManager().getExpansionColumnNumber(v_varDecl->getBeginLoc());

                #ifdef DEBUG_INST
                freopen(visitor_OutFile, "a+", stderr);
                std::cerr << "VisitForStmt :: Variable (SingleDecl) " << varName << " of type " << varType
                          << " declared at line " << varLine << " and column " << varCol << "\n";
                fclose(stderr);
                #endif


                scope_info.vnam = varName;
                scope_info.vtyp = varType;
                scope_info.vlin = varLine;

                // scope_info.scopeBeginLine = cmpndBeginLine;
                scope_info.scopeBeginLine = varLine; // scope begins at the line of declaration.
                // Fixes compiler error where variable value is printed before declaration

                scope_info.scopeEndLine = forEndLine;
                scope_pair = std::make_pair(varName, scope_info);
                scope_map.insert(scope_pair);
            }
        }
        else
        { // If v_declStmt is not singleDecl but something like int x,y
            for (auto decl : v_declStmt->decls())
            {
                clang::Decl *v_decl = decl;

                #ifdef DEBUG_INST
                freopen(visitor_OutFile, "a+", stderr);
                std::cerr << "Decl is " << v_decl->getDeclKindName() << "\n";
                fclose(stderr);
                #endif

                // // check if it is a variable declaration and get variable name, line number and column number and type
                if (strcmp(v_decl->getDeclKindName(), "Var") == 0)
                {
                    clang::VarDecl *v_varDecl = clang::dyn_cast<clang::VarDecl>(v_decl);
                    std::string varName = v_varDecl->getNameAsString();
                    std::string varType = v_varDecl->getType().getAsString();
                    unsigned int varLine = visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(v_varDecl->getBeginLoc());
                    unsigned int varCol = visitor_CompilerInstance->getSourceManager().getExpansionColumnNumber(v_varDecl->getBeginLoc());

                    #ifdef DEBUG_INST
                    freopen(visitor_OutFile, "a+", stderr);
                    std::cerr << "VisitForStmt :: Variable (Not SingleDecl) " << varName << " of type " << varType
                              << " declared at line " << varLine << " and column " << varCol << "\n";
                    fclose(stderr);
                    #endif

                    scope_info.vnam = varName;
                    scope_info.vtyp = varType;
                    scope_info.vlin = varLine;

                    //     // scope_info.scopeBeginLine = cmpndBeginLine;
                    scope_info.scopeBeginLine = varLine; // scope begins at the line of declaration.
                                                         //     // Fixes compiler error where variable value is printed before declaration

                    scope_info.scopeEndLine = forEndLine;
                    scope_pair = std::make_pair(varName, scope_info);
                    scope_map.insert(scope_pair);
                }
            }
        }
        #ifdef DEBUG_INST
        freopen(visitor_OutFile, "a+", stderr);
        std::cerr << "VisitForStmt :: Decl Stmt found in Init and added to scope_map\n";
        fclose(stderr);
        #endif
    }
    else
    {
        #ifdef DEBUG_INST
        freopen(visitor_OutFile, "a+", stderr);
        std::cerr << "VisitForStmt :: No Decl Stmt found in Init\n";
        fclose(stderr);
        #endif
    }

    return true;
}


bool PyASTVisitor::check_visit_stmt(clang::Stmt *vs)
{
    //Check if stmt_visit_count

    return false;
}

bool PyASTVisitor::VisitStmt(clang::Stmt *s)
{
    unsigned int lineNum;
    unsigned int printlineNum;
    unsigned int blockBeginLineNum;
    unsigned int blockEndLineNum;
    std::pair<std::string, AVInfo::assignment_info> av_pair;
    std::string insertStr = "";

    //If s is not found in stmt_visit_count, insert s with count 1
    //If s is found in stmt_visit_count, increment count by 1
    // if (stmt_visit_count.find(s) != stmt_visit_count.end())
    // {
    //     stmt_visit_count[s] += 1;
    // }
    // else
    // {
    //     stmt_visit_count.insert(std::make_pair(s, 1));
    // }

    // #ifdef DEBUG_INST
    // freopen(visitor_OutFile, "a+", stderr);
    // std::cerr << "VisitStmt :: Visiting " << s->getStmtClassName() << "at line " << visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(s->getBeginLoc()) << "\n";
    // std::cerr << "Count of " << s->getStmtClassName() << " is " << stmt_visit_count[s] << "\n";
    // fclose(stderr);
    // #endif

    // clang::SourceLocation StmtBeginSourceLoc = s->getBeginLoc();
    // clang::SourceLocation StmtEndSourceLoc = s->getEndLoc();
    // clang::SourceLocation BraceBeginSourceLoc = StmtBeginSourceLoc.getLocWithOffset(0);
    // clang::SourceLocation BraceEndSourceLoc = StmtEndSourceLoc.getLocWithOffset(0);

    // vRewriter.InsertTextBefore(BraceBeginSourceLoc, "{");
    // vRewriter.InsertTextAfter(BraceEndSourceLoc, "}");

    if (strcmp(s->getStmtClassName(), "WhileStmt") == 0)
    {
    #ifdef DEBUG_INST
    freopen(visitor_OutFile, "a+", stderr);
    std::cerr << "VisitStmt :: While Statement Found\n";
    fclose(stderr);
    #endif

    clang::WhileStmt *whileStmt = clang::dyn_cast<clang::WhileStmt>(s);

    clang::SourceLocation nextSourceLoc = whileStmt->getBody()->getBeginLoc();
    clang::SourceLocation printSourceLoc = nextSourceLoc.getLocWithOffset(0);
    printlineNum = visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(printSourceLoc);
    // Uncomment the following two lines and comment the above two lines to print at the end of the while loop
    // clang::SourceLocation nextSourceLoc = whileStmt->getBody()->getEndLoc();
    // clang::SourceLocation printSourceLoc = nextSourceLoc.getLocWithOffset(-1);

    clang::SourceLocation beforeWhilePrintSourceLoc = whileStmt->getBeginLoc();
    beforeWhilePrintSourceLoc = beforeWhilePrintSourceLoc.getLocWithOffset(-1); // Offset to print before the while loop

    // Get the source location before the while loop
    // clang::SourceLocation whileSourceLoc = whileStmt->getBeginLoc();
    // clang::SourceLocation whileSourceLoc = whileStmt->getBeginLoc();
    // clang::SourceLocation beforeWhilePrintSourceLoc = nextSourceLoc.getLocWithOffset(-1);
    // clang::SourceLocation beforeWhilePrintSourceLoc = whileStmt->getSourceRange().getBegin();

    // lineNum = visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(nextSourceLoc);
    // print_map(nextSourceLoc, lineNum, "");

    // Check if there is an array use in the body of the loop and only then instrument
    if (!getArrayUseInLoop(s, "WhileStmt"))
    {
        if (instrumentation_flag == 1)
            print_map(printSourceLoc, printlineNum, "");
        else if (instrumentation_flag == 2)
        {
            print_cbmc(printSourceLoc, printlineNum, "");
            print_trace(printSourceLoc, printlineNum, "loop_head");
            print_trace(beforeWhilePrintSourceLoc, printlineNum, "reached_control");
        }
    }
    else
    {
        print_other(printSourceLoc, printlineNum, "ArrayFound");
    }
    }

    if (strcmp(s->getStmtClassName(), "ForStmt") == 0)
    {
        #ifdef DEBUG_INST
        freopen(visitor_OutFile, "a+", stderr);
        std::cerr << "VisitStmt :: For Statement Found\n";
        fclose(stderr);
        #endif

        clang::ForStmt *forStmt = clang::dyn_cast<clang::ForStmt>(s);

        // Check if there is a variable declaration in the For statement e.g. for (int x; x < 10; x++) and add to scope map
        if (getDeclInForStmt(forStmt))
        {
            #ifdef DEBUG_INST
            freopen(visitor_OutFile, "a+", stderr);
            std::cerr << "Added variable in For Stmt to scope map if it exists and Returned from getDeclInForStmt()\n";
            fclose(stderr);
            #endif
        }

        clang::SourceLocation nextSourceLoc = forStmt->getBody()->getBeginLoc();
        lineNum = visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(nextSourceLoc);
        clang::SourceLocation printSourceLoc = nextSourceLoc.getLocWithOffset(0);
        printlineNum = visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(printSourceLoc);
        
        clang::SourceLocation beforeForPrintSourceLoc = forStmt->getBeginLoc();
        beforeForPrintSourceLoc = beforeForPrintSourceLoc.getLocWithOffset(-1); //Offset to print before the for loop

        // print_map(nextSourceLoc, lineNum, "");

        // Check if there is an array use in the body of the loop and only then instrument
        if (!getArrayUseInLoop(s, "ForStmt"))
        {
            if (instrumentation_flag == 1)
                print_map(printSourceLoc, printlineNum, "");
            else if (instrumentation_flag == 2)
            {
                print_cbmc(printSourceLoc, printlineNum, "");
                print_trace(printSourceLoc, printlineNum, "loop_head");
                print_trace(beforeForPrintSourceLoc, printlineNum, "reached_control");
            }
        }
        else
        {
            print_other(printSourceLoc, printlineNum, "ArrayFound");
        }
    }

    if (strcmp(s->getStmtClassName(), "DoStmt") == 0)
    {
        #ifdef DEBUG_INST
        freopen(visitor_OutFile, "a+", stderr);
        std::cerr << "VisitStmt :: Do-While Statement Found\n";
        fclose(stderr);
        #endif

        clang::DoStmt *doStmt = clang::dyn_cast<clang::DoStmt>(s);
        clang::SourceLocation nextSourceLoc = doStmt->getBody()->getBeginLoc();
        lineNum = visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(nextSourceLoc);

        clang::SourceLocation printSourceLoc = nextSourceLoc.getLocWithOffset(0);
        printlineNum = visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(printSourceLoc);
        
        clang::SourceLocation beforeDoWhilePrintSourceLoc = doStmt->getBeginLoc();
        beforeDoWhilePrintSourceLoc = beforeDoWhilePrintSourceLoc.getLocWithOffset(-1); //Offset to print before the while loop
        // print_map(nextSourceLoc, lineNum, "");


        // Check if there is an array use in the body of the loop and only then instrument
        if (!getArrayUseInLoop(s, "DoStmt"))
        {
            if (instrumentation_flag == 1)
                print_map(printSourceLoc, printlineNum, "");
            else if (instrumentation_flag == 2)
            {
                print_cbmc(printSourceLoc, printlineNum, "");
                print_trace(printSourceLoc, printlineNum, "loop_head");
                print_trace(beforeDoWhilePrintSourceLoc, printlineNum, "reached_control");
            }
        }
        else
        {
            print_other(printSourceLoc, printlineNum, "ArrayFound");
        }
    }


    if (strcmp(s->getStmtClassName(), "IfStmt") == 0)
    {
        #ifdef DEBUG_INST
        freopen(visitor_OutFile, "a+", stderr);
        std::cerr << "VisitStmt :: If Statement Found at line " << visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(s->getBeginLoc()) << "\n";
        fclose(stderr);
        #endif
        
        clang::IfStmt *ifStmt = clang::dyn_cast<clang::IfStmt>(s);
        clang::SourceLocation nextSourceLoc = ifStmt->getBeginLoc();
        lineNum = visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(nextSourceLoc);
        
        clang::SourceLocation printSourceLoc = nextSourceLoc.getLocWithOffset(0);
        printlineNum = visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(printSourceLoc);

        clang::SourceLocation beforeIfPrintSourceLoc = ifStmt->getBeginLoc();
        beforeIfPrintSourceLoc = beforeIfPrintSourceLoc.getLocWithOffset(-1); // Offset to print before the If statement

        unsigned int printthenLineNum;
        unsigned int printelseLineNum;
        clang::SourceLocation thenSourceLoc;
        clang::SourceLocation elseSourceLoc;

        if (ifStmt->getThen())
        {
            thenSourceLoc = ifStmt->getThen()->getBeginLoc();
            printthenLineNum = visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(thenSourceLoc);
        }

        if (ifStmt->getElse())
        {
            // if (clang::IfStmt *elseIfStmt = clang::dyn_cast<clang::IfStmt>(ifStmt->getElse()))
            // {
            //     //thenSourceLoc = ifStmt->getThen()->getBeginLoc();
            //     //printthenLineNum = visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(thenSourceLoc);
            // }
            // else
            {
                elseSourceLoc = ifStmt->getElse()->getBeginLoc();
                printelseLineNum = visitor_CompilerInstance->getSourceManager().getExpansionLineNumber(elseSourceLoc);
            }
        }
        

        if (instrumentation_flag == 2)
        {
            print_trace(beforeIfPrintSourceLoc, printlineNum, "reached_control");
            print_trace(thenSourceLoc, printthenLineNum, "control_true");
            print_trace(elseSourceLoc, printelseLineNum, "control_false");
        }
    }




    return true;
}

//
// Created by Ando on 2023-08-26.
//

#include "Visitor.h"
#include "Module.h"
#include "Frontend/SysYParser.h"

using namespace IR;

void register_lib_funcs(){

}

antlrcpp::Any Visitor::visitFuncDef(SysYParser::FuncDefContext *ctx) {
    std::string ident = ctx->Identifier()->getText();
    std::string type = ctx->funcType()->getText();
    std::cout << ident << " " << type << "\n";
    return nullptr;
}

antlrcpp::Any Visitor::visitCompUnit(SysYParser::CompUnitContext *ctx){
    std::list<Function*> functions;
    std::list<GlobalVar*> global_vars;

    ir_module = *new Module(functions, global_vars);

    register_lib_funcs();

    for(SysYParser::FuncDefContext* func_def : ctx->funcDef()){
        visitFuncDef(func_def);
    }

    return nullptr;
}
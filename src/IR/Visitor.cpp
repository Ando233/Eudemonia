//
// Created by Ando on 2023-08-26.
//

#include "Visitor.h"
#include "Module.h"
#include "Frontend/SysYParser.h"
#include "IRBuildFactory.h"

using namespace IR;

Function* CurFunction;
Value* CurValue;
BasicBlock* CurBasicBlock;

IRBuildFactory f = IRBuildFactory::getInstance();

void register_lib_funcs(){

}

antlrcpp::Any Visitor::visitExp(SysYParser::ExpContext *ctx) {
    return nullptr;
}

antlrcpp::Any Visitor::visitReturnStmt(SysYParser::ReturnStmtContext *ctx) {
    if(ctx->exp()){
        visitExp(ctx->exp());

//        Type* CurType = CurValue->getType();
//        Type* CurFuncType = CurFunction->getType();
//        if(CurType->isIntegerTy() && CurFuncType->isFloatTy()){
//            CurValue = f.build_conversion_inst(CurValue, OP::Itof, CurBasicBlock);
//        }
//        else if(CurFuncType->isIntegerTy() && CurType->isFloatTy()){
//            CurValue = f.build_conversion_inst(CurValue, OP::Ftoi, CurBasicBlock);
//        }

    }
    return nullptr;
}

antlrcpp::Any Visitor::visitBlockItem(SysYParser::BlockItemContext *ctx) {
    visitChildren(ctx);
    return nullptr;
}

antlrcpp::Any Visitor::visitBlock(SysYParser::BlockContext *ctx) {
    visitChildren(ctx);
    return nullptr;
}

antlrcpp::Any Visitor::visitFuncDef(SysYParser::FuncDefContext *ctx) {
    std::string ident = ctx->Identifier()->getText();
    std::string type = ctx->funcType()->getText();

    CurFunction = f.build_function("@" + ident, type, ir_module);

    CurBasicBlock = f.build_basic_block(CurFunction);
    visitBlock(ctx->block());

    return nullptr;
}

antlrcpp::Any Visitor::visitCompUnit(SysYParser::CompUnitContext *ctx){
    std::list<Function*> functions;
    std::list<GlobalVar*> global_vars;

    ir_module = *new Module(functions, global_vars);

    register_lib_funcs();

    visitChildren(ctx);

    return nullptr;
}
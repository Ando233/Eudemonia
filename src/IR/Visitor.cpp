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

antlrcpp::Any Visitor::visitPrimaryExp(SysYParser::PrimaryExpContext *ctx, bool is_const) {
    if(ctx->number()){
        SysYParser::NumberContext* num = ctx->number();
        std::string num_string = ctx->number()->getText();
        if(num->IntConst()){
            int val = stoi(num_string);

        }
    }
    return nullptr;
}

antlrcpp::Any Visitor::visitUnaryExp(SysYParser::UnaryExpContext *ctx, bool is_const) {
    visitPrimaryExp(ctx->primaryExp(), is_const);
    return nullptr;
}

antlrcpp::Any Visitor::visitExp(SysYParser::ExpContext *ctx, bool is_const) {
    std::vector<SysYParser::UnaryExpContext *> unaryExps = ctx->unaryExp();
    visitUnaryExp(unaryExps[0], is_const);

    return nullptr;
}

antlrcpp::Any Visitor::visitReturn(SysYParser::ReturnContext *ctx) {
    if(ctx->exp()){
        visitExp(ctx->exp(), false);

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

antlrcpp::Any Visitor::visitStmt(SysYParser::StmtContext *ctx) {
    if(ctx->return_()){
        visitReturn(ctx->return_());
    }
    return nullptr;
}

antlrcpp::Any Visitor::visitBlock(SysYParser::BlockContext *ctx) {
    visitChildren(ctx);
    return nullptr;
}

antlrcpp::Any Visitor::visitFuncDef(SysYParser::FuncDefContext *ctx) {
    std::string ident = ctx->Ident()->getText();
    std::string type = ctx->funcType()->getText();

    CurFunction = f.build_function("@" + ident, type, ir_module);

    CurBasicBlock = f.build_basic_block(CurFunction);
    visitBlock(ctx->block());

    return nullptr;
}

antlrcpp::Any Visitor::visitCompUnit(SysYParser::CompUnitContext *ctx){
    std::list<Function*> functions;
    std::list<GlobalVar*> global_vars;

    ir_module = new Module(functions, global_vars);

    register_lib_funcs();

    visitChildren(ctx);

    return nullptr;
}
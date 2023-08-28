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

antlrcpp::Any Visitor::visitPrimaryExp(SysYParser::PrimaryExpContext *ctx, bool is_const) {
    if(ctx->number()){
        SysYParser::NumberContext* num = ctx->number();
        std::string num_string = ctx->number()->getText();
        if(num->IntConst()){
            int val = stoi(num_string, 0, 0);
            CurValue = f.build_number(val);
        }
        else if(num->FloatConst()){
            float val = stof(num_string);
            CurValue = f.build_number(val);
        }
    }
    return nullptr;
}

antlrcpp::Any Visitor::visitUnaryExp(SysYParser::UnaryExpContext *ctx, bool is_const) {
    visitPrimaryExp(ctx->primaryExp(), is_const);

    int count = 0;
    for(int i = ctx->unaryOP().size() - 1; i >= 0; i--){
        std::string unary_op_string = ctx->unaryOP(i)->getText();
        if(unary_op_string == "-"){
            count++;
        }
        else if(unary_op_string == "!"){
            count = 0;
            Value* zero;
            if(CurValue->get_type()->is_integer_type()){
                zero = f.build_number(0);
            }
            else if(CurValue->get_type()->is_float_type()){
                zero = f.build_number((float) 0);
            }
            CurValue = f.build_bin_inst(CurValue, zero, OP::eq, CurBasicBlock);
        }
    }
    if(count % 2 == 1){
        if(auto* const_int = dynamic_cast<ConstInt*>(CurValue)){
            CurValue = f.build_number(-const_int->getValue());
        }
        else if(auto* const_float = dynamic_cast<ConstFloat*>(CurValue)){
            CurValue = f.build_number(-const_float->getValue());
        }
        else{
            Value* zero;
            if(CurValue->get_type()->is_integer_type()){
                zero = f.build_number(0);
            }
            else if(CurValue->get_type()->is_float_type()){
                zero = f.build_number((float) 0);
            }
            CurValue = f.build_bin_inst(zero, CurValue, OP::sub, CurBasicBlock);
        }
    }
    return nullptr;
}

antlrcpp::Any Visitor::visitExp(SysYParser::ExpContext *ctx, bool is_const) {
    std::vector<SysYParser::UnaryExpContext *> unaryExps = ctx->unaryExp();
    visitUnaryExp(unaryExps[0], is_const);

//    for(int i = 0; i < ctx->op().size(); i++){
//        std::string op_string = ctx->op(i)->getText();
//
//    }

    return nullptr;
}

antlrcpp::Any Visitor::visitReturn(SysYParser::ReturnContext *ctx) {
    if(ctx->exp()){
        visitExp(ctx->exp(), false);

        Type* CurType = CurValue->get_type();
        Type* CurFuncType = CurFunction->get_type();
        if(CurType->is_integer_type() && CurFuncType->is_float_type()){
            CurValue = f.build_conversion_inst(CurValue, OP::itof, CurBasicBlock);
        }
        else if(CurFuncType->is_integer_type() && CurType->is_float_type()){
            CurValue = f.build_conversion_inst(CurValue, OP::ftoi, CurBasicBlock);
        }

        CurValue = f.build_ret_inst(CurValue, CurBasicBlock);
    }
    else{
        f.build_ret_inst(CurBasicBlock);
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

    CurFunction = f.build_function(ident, type, ir_module);

    CurBasicBlock = f.build_basic_block(CurFunction);
    visitBlock(ctx->block());

    return nullptr;
}

antlrcpp::Any Visitor::visitCompUnit(SysYParser::CompUnitContext *ctx){
    visitChildren(ctx);

    return nullptr;
}
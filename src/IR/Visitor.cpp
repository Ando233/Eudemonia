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
std::vector<std::unordered_map<std::string, Value*>> sym_tables;



void Visitor::push_sym_table() {
    sym_tables.emplace_back();
}

void Visitor::pop_sym_table() {
    sym_tables.pop_back();
}

void Visitor::push_symbol(const std::string& ident, Value* value) {
    int len = sym_tables.size();
    sym_tables[len - 1][ident] = value;
}

Value* Visitor::find(const std::string& ident){
    int len = sym_tables.size();
    for (int i = len - 1; i >= 0; i--) {
        std::unordered_map<std::string, Value*>& sym_table = sym_tables[i];
        auto it = sym_table.find(ident);
        if (it != sym_table.end()) {
            return it->second;
        }
    }
    return nullptr;
}

antlrcpp::Any Visitor::visitLVal(SysYParser::LValContext *ctx, bool is_fetch) {
    std::string ident = ctx->Ident()->getText();
    CurValue = find(ident);

    if(CurValue->get_type()->is_pointer_type()){
        if(is_fetch){
            Type* ele_type = dynamic_cast<PointerType*>(CurValue->get_type())->get_ele_type();
            CurValue = f.build_load_inst(CurValue, CurBasicBlock);
        }
    }

    return nullptr;
}

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
    else if(ctx->exp()){
        visitExp(ctx->exp(), is_const);
    }
    else if(ctx->lVal()){
        visitLVal(ctx->lVal(), true);
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
            CurValue = f.build_number(-const_int->get_value());
        }
        else if(auto* const_float = dynamic_cast<ConstFloat*>(CurValue)){
            CurValue = f.build_number(-const_float->get_value());
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

antlrcpp::Any Visitor::visitMulExp(SysYParser::MulExpContext *ctx, bool is_const){
    visitUnaryExp(ctx->unaryExp(0), is_const);
    for(int i = 0; i < ctx->mulOP().size(); i++){
        std::string op_string = ctx->mulOP(i)->getText();
        Value* tmp_value = CurValue;
        visitUnaryExp(ctx->unaryExp(i + 1), is_const);
        auto const_left = dynamic_cast<Const*>(tmp_value);
        auto const_right = dynamic_cast<Const*>(CurValue);
        if(const_left && const_right){
            CurValue = f.build_cal_number(const_left, const_right, op_string);
        }
        else{
            CurValue = f.build_bin_inst(tmp_value, CurValue, Instruction::str_to_op(op_string), CurBasicBlock);
        }
    }
    return nullptr;
}

antlrcpp::Any Visitor::visitExp(SysYParser::ExpContext *ctx, bool is_const) {
    visitMulExp(ctx->mulExp(0), is_const);
    for(int i = 0; i < ctx->addOP().size(); i++){
        std::string op_string = ctx->addOP(i)->getText();
        Value* tmp_value = CurValue;
        visitMulExp(ctx->mulExp(i + 1), is_const);
        auto const_left = dynamic_cast<Const*>(tmp_value);
        auto const_right = dynamic_cast<Const*>(CurValue);
        if(const_left && const_right){
            CurValue = f.build_cal_number(const_left, const_right, op_string);
        }
        else{
            CurValue = f.build_bin_inst(tmp_value, CurValue, Instruction::str_to_op(op_string), CurBasicBlock);
        }
    }

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

antlrcpp::Any Visitor::visitBlockItem(SysYParser::BlockItemContext *ctx) {
    if(ctx->stmt()){
        visitStmt(ctx->stmt());
    }
    else if(ctx->decl()){
        visitDecl(ctx->decl(), false);
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

    push_symbol(ident, CurFunction);
    push_sym_table();

    CurBasicBlock = f.build_basic_block(CurFunction);
    visitBlock(ctx->block());

    pop_sym_table();
    return nullptr;
}

antlrcpp::Any Visitor::visitConstDef(SysYParser::DefContext *ctx, Type* type, bool is_global){
    std::string ident = ctx->Ident()->getText();
    if(ctx->initVal()){
        visitExp(ctx->initVal()->exp(), true);
        if(type == IntegerType::get_instance() && CurValue->get_type() == FloatType::get_instance()){
            auto const_float = dynamic_cast<ConstFloat*>(CurValue);
            CurValue = f.build_number((int) const_float->get_value());
        }
        else if(type == FloatType::get_instance() && CurValue->get_type() == IntegerType::get_instance()){
            auto const_int = dynamic_cast<ConstInt*>(CurValue);
            CurValue = f.build_number((float) const_int->get_value());
        }
        push_symbol(ident, CurValue);
    }
    return nullptr;
}

antlrcpp::Any Visitor::visitVarDef(SysYParser::DefContext* ctx, Type* type, bool is_global){
    std::string ident = ctx->Ident()->getText();
    //  普通变量
    if(ctx->initVal()) {
        if (is_global) {

        }
        else {
            CurValue = f.build_alloc_inst(type, CurBasicBlock);
            if(ctx->initVal()->exp()){
                Value* tmp_value = CurValue;
                visitExp(ctx->initVal()->exp(), false);
                f.build_store_inst(CurValue, tmp_value, CurBasicBlock);
                CurValue = tmp_value;
            }
        }
        push_symbol(ident, CurValue);
    }
    return nullptr;
}

antlrcpp::Any Visitor::visitDecl(SysYParser::DeclContext *ctx, bool is_global) {
    bool is_const = false;
    if(ctx->Const()) is_const = true;
    std::string type_string = ctx->bType()->getText();
    Type* type;
    if(type_string == "int") type = IntegerType::get_instance();
    else if(type_string == "float") type = FloatType::get_instance();

    for(auto def : ctx->def()){
        if(is_const) visitConstDef(def, type, is_global);
        else visitVarDef(def, type, is_global);
    }
    return nullptr;
}

antlrcpp::Any Visitor::visitGlobalDecl(SysYParser::GlobalDeclContext *ctx) {
    visitDecl(ctx->decl(), true);
    return nullptr;
}

antlrcpp::Any Visitor::visitCompUnit(SysYParser::CompUnitContext *ctx){

    push_sym_table();
    visitChildren(ctx);

    return nullptr;
}
//
// Created by Ando on 2023-08-26.
//

#ifndef EUDEMONIA_VISITOR_H
#define EUDEMONIA_VISITOR_H

#include <utility>

#include "Frontend/SysYBaseVisitor.h"
#include "Module.h"

namespace IR{

class Visitor : public SysYBaseVisitor{
private:
    IR::Module* ir_module;
public:
    explicit Visitor(IR::Module* ir_module) : ir_module(ir_module) {};

private:
    void push_symbol(const std::string& ident, Value* value);
    void push_sym_table();
    void pop_sym_table();
    void push_symbol();
    Value* find(const std::string& ident);

    antlrcpp::Any visitBlockItem(SysYParser::BlockItemContext *ctx);
    antlrcpp::Any visitLVal(SysYParser::LValContext *ctx, bool is_fetch);
    antlrcpp::Any visitConstDef(SysYParser::DefContext *ctx, Type* type, bool is_global);
    antlrcpp::Any visitDecl(SysYParser::DeclContext *ctx, bool is_global);
    antlrcpp::Any visitGlobalDecl(SysYParser::GlobalDeclContext *ctx) override;
    antlrcpp::Any visitMulExp(SysYParser::MulExpContext *ctx, bool is_const);
    antlrcpp::Any visitPrimaryExp(SysYParser::PrimaryExpContext *ctx, bool is_const);
    antlrcpp::Any visitUnaryExp(SysYParser::UnaryExpContext *ctx, bool is_const);
    antlrcpp::Any visitExp(SysYParser::ExpContext *ctx, bool is_const);
    antlrcpp::Any visitReturn(SysYParser::ReturnContext *ctx) override;
    antlrcpp::Any visitStmt(SysYParser::StmtContext *ctx) override;
    antlrcpp::Any visitBlock(SysYParser::BlockContext *ctx) override;
    antlrcpp::Any visitFuncDef(SysYParser::FuncDefContext *ctx) override;

public:
    antlrcpp::Any visitCompUnit(SysYParser::CompUnitContext *ctx) override;

};
}


#endif //EUDEMONIA_VISITOR_H

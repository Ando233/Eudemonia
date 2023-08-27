
// Generated from SysY.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "SysYVisitor.h"


/**
 * This class provides an empty implementation of SysYVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  SysYBaseVisitor : public SysYVisitor {
public:

  virtual std::any visitCompUnit(SysYParser::CompUnitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDecl(SysYParser::DeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDef(SysYParser::DefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInitVal(SysYParser::InitValContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInitArray(SysYParser::InitArrayContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExp(SysYParser::ExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBinaryExp(SysYParser::BinaryExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnaryExp(SysYParser::UnaryExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrimaryExp(SysYParser::PrimaryExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCall(SysYParser::CallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumber(SysYParser::NumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLVal(SysYParser::LValContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncDef(SysYParser::FuncDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncFParam(SysYParser::FuncFParamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlock(SysYParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStmt(SysYParser::StmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssign(SysYParser::AssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpStmt(SysYParser::ExpStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfStmt(SysYParser::IfStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhileStmt(SysYParser::WhileStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBreak(SysYParser::BreakContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitContinue(SysYParser::ContinueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturn(SysYParser::ReturnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnaryOP(SysYParser::UnaryOPContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOp(SysYParser::OpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBType(SysYParser::BTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncType(SysYParser::FuncTypeContext *ctx) override {
    return visitChildren(ctx);
  }


};


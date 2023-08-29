
// Generated from D:/Clion Projects/Eudemonia/src/Frontend\SysY.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "SysYParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by SysYParser.
 */
class  SysYVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by SysYParser.
   */
    virtual std::any visitCompUnit(SysYParser::CompUnitContext *context) = 0;

    virtual std::any visitGlobalDecl(SysYParser::GlobalDeclContext *context) = 0;

    virtual std::any visitDecl(SysYParser::DeclContext *context) = 0;

    virtual std::any visitDef(SysYParser::DefContext *context) = 0;

    virtual std::any visitInitVal(SysYParser::InitValContext *context) = 0;

    virtual std::any visitInitArray(SysYParser::InitArrayContext *context) = 0;

    virtual std::any visitMulExp(SysYParser::MulExpContext *context) = 0;

    virtual std::any visitExp(SysYParser::ExpContext *context) = 0;

    virtual std::any visitLorExp(SysYParser::LorExpContext *context) = 0;

    virtual std::any visitLandExp(SysYParser::LandExpContext *context) = 0;

    virtual std::any visitEqExp(SysYParser::EqExpContext *context) = 0;

    virtual std::any visitRelExp(SysYParser::RelExpContext *context) = 0;

    virtual std::any visitUnaryExp(SysYParser::UnaryExpContext *context) = 0;

    virtual std::any visitPrimaryExp(SysYParser::PrimaryExpContext *context) = 0;

    virtual std::any visitCall(SysYParser::CallContext *context) = 0;

    virtual std::any visitNumber(SysYParser::NumberContext *context) = 0;

    virtual std::any visitLVal(SysYParser::LValContext *context) = 0;

    virtual std::any visitFuncDef(SysYParser::FuncDefContext *context) = 0;

    virtual std::any visitFuncFParam(SysYParser::FuncFParamContext *context) = 0;

    virtual std::any visitBlock(SysYParser::BlockContext *context) = 0;

    virtual std::any visitBlockItem(SysYParser::BlockItemContext *context) = 0;

    virtual std::any visitStmt(SysYParser::StmtContext *context) = 0;

    virtual std::any visitAssign(SysYParser::AssignContext *context) = 0;

    virtual std::any visitExpStmt(SysYParser::ExpStmtContext *context) = 0;

    virtual std::any visitIfStmt(SysYParser::IfStmtContext *context) = 0;

    virtual std::any visitWhileStmt(SysYParser::WhileStmtContext *context) = 0;

    virtual std::any visitBreak(SysYParser::BreakContext *context) = 0;

    virtual std::any visitContinue(SysYParser::ContinueContext *context) = 0;

    virtual std::any visitReturn(SysYParser::ReturnContext *context) = 0;

    virtual std::any visitUnaryOP(SysYParser::UnaryOPContext *context) = 0;

    virtual std::any visitAddOP(SysYParser::AddOPContext *context) = 0;

    virtual std::any visitMulOP(SysYParser::MulOPContext *context) = 0;

    virtual std::any visitRelOP(SysYParser::RelOPContext *context) = 0;

    virtual std::any visitBType(SysYParser::BTypeContext *context) = 0;

    virtual std::any visitFuncType(SysYParser::FuncTypeContext *context) = 0;


};


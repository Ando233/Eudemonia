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
    IR::Module ir_module;
public:
    explicit Visitor(IR::Module ir_module) : ir_module(std::move(ir_module)) {};

    //  extend SysYBaseVisitor

    antlrcpp::Any visitFuncDef(SysYParser::FuncDefContext *ctx) override;

    antlrcpp::Any visitCompUnit(SysYParser::CompUnitContext *ctx) override;

};
}


#endif //EUDEMONIA_VISITOR_H

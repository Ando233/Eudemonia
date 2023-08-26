//
// Created by Ando on 2023-08-26.
//

#include "Visitor.h"

using namespace IR;

antlrcpp::Any Visitor::visitCompUnit(SysYParser::CompUnitContext *ctx){
    std::cout << "Begin Visitor!";
    return 0;
}
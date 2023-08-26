//
// Created by Ando on 2023-08-22.
//
#include <iostream>
#include <fstream>
#include "antlr4-runtime.h"
#include "Frontend/SysYLexer.h"
#include "Frontend/SysYParser.h"
#include "IR/Function.h"
#include "IR/Type.h"
#include "IR/Module.h"
#include "IR/Visitor.h"

int main(int argc, char **argv){

    std::ifstream source("./testcase.sy");
    std::ofstream output_ir("./llvm.ll");

    //  Lexer & Parser
    antlr4::ANTLRInputStream input(source);
    SysYLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    SysYParser parser(&tokens);

    //  Visitor
    auto root = parser.compUnit();
    IR::Module ir_module;
    IR::Visitor visitor(ir_module);
    visitor.visitCompUnit(root);

    std::cout << "Finished  compile!" << '\n';

    return 0;
}
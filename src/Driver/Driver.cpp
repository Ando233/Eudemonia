//
// Created by Ando on 2023-08-26.
//

#include "Config.h"
#include <iostream>
#include <fstream>
#include "antlr4-runtime.h"
#include "Frontend/SysYLexer.h"
#include "Frontend/SysYParser.h"
#include "IR/Function.h"
#include "IR/Type.h"
#include "IR/Module.h"
#include "IR/Visitor.h"
#include "Driver.h"

void parse_args(int argc, char** argv);

void Driver::run(){
    parse_args(argc, argv);

    std::ifstream source(Config::input_file_name);
    std::ofstream ir(Config::ir_file_name);
    std::ofstream obj(Config::obj_file_name);
    std::ofstream log(Config::log_file_name);

    //  Lexer & Parser
    log << "Begin Lex!\n";
    antlr4::ANTLRInputStream input(source);
    SysYLexer lexer(&input);
    log << "End Lex!\n";

    log << "Begin Parse!\n";
    antlr4::CommonTokenStream tokens(&lexer);
    SysYParser parser(&tokens);
    log << "End Parse!\n";

    //  Visitor
    log << "Begin Visit!\n";
    auto root = parser.compUnit();
    IR::Module ir_module;
    IR::Visitor visitor(ir_module);
    visitor.visitCompUnit(root);
    log << "End Visit!\n";

    log << "Finished compile!\n";
}

//  根据命令行参数调整Config内容
void parse_args(int argc, char** argv){

}
//
// Created by Ando on 2023-08-26.
//

#include <iostream>
#include <fstream>
#include <chrono>
#include "Config.h"
#include "antlr4-runtime.h"
#include "Frontend/SysYLexer.h"
#include "Frontend/SysYParser.h"
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

    auto begin = std::chrono::high_resolution_clock::now();
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
    IR::Visitor visitor(&ir_module);
    visitor.visitCompUnit(root);
    log << "End Visit!\n";

    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    log << "Finished compile!\n";
    log << "Total compile time: ";
    log << std::fixed << std::setprecision(5) << (double) elapsed.count() * 1e-9 << " second\n";
}

//  根据命令行参数调整Config内容
void parse_args(int argc, char** argv){

}
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
#include "Backend/ObjModule.h"

void parse_args(int argc, char** argv);

void Driver::run(){
    parse_args(argc, argv);

    std::ifstream source(Config::src_file_name);
    std::ofstream ir_out(Config::ir_file_name);
    std::ofstream obj_out(Config::obj_file_name);
    std::ofstream log(Config::log_file_name);

    auto begin = std::chrono::high_resolution_clock::now();
    //  Lexer & Parser
    antlr4::ANTLRInputStream input(source);
    SysYLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    SysYParser parser(&tokens);

    //  Visitor
    auto root = parser.compUnit();
    IR::Module ir_module;
    IR::Visitor visitor(&ir_module);
    visitor.visitCompUnit(root);

    //  IR Optimize & Dump
    ir_module.dump(ir_out);

    ObjModule obj_module(&ir_module);
    obj_module.dump(obj_out);

    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    log << "Finished compile!\n";
    log << "Total compile time: ";
    log << std::fixed << std::setprecision(5) << (double) elapsed.count() * 1e-9 << " second\n";
}

//  根据命令行参数调整Config内容
void parse_args(int argc, char** argv){

}
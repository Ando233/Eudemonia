//
// Created by Ando on 2023-08-26.
//

#ifndef EUDEMONIA_CONFIG_H
#define EUDEMONIA_CONFIG_H

#include <cstdlib>
#include <string>

class Config {
public:
    static std::string input_file_name;
    static std::string ir_file_name;
    static std::string obj_file_name;
    static std::string log_file_name;
};

std::string Config::input_file_name = "testcase.sy";
std::string Config::ir_file_name = "llvm.ll";
std::string Config::obj_file_name = "testcase.s";
std::string Config::log_file_name = "runtime.log";

#endif //EUDEMONIA_CONFIG_H

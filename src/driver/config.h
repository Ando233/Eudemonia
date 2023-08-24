//
// Created by Ando on 2023-08-22.
//

#ifndef EUDEMONIA_CONFIG_H
#define EUDEMONIA_CONFIG_H


#include <string>

class config {
public:
    std::string input_file_name = "testcase.sy";
    std::string output_ir_file_name = "llvm.ll";
    std::string output_obj_file_name = "testcase.s";
};


#endif //EUDEMONIA_CONFIG_H

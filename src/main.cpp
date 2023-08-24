//
// Created by Ando on 2023-08-22.
//
#include <iostream>
#include <fstream>
#include "driver/config.h"

int main(int argc, char **argv){

    std::ifstream source("./testcase.sy");
    std::ofstream output_ir("./llvm.ll");


    char c;
    while (source.get(c)){
        output_ir << c;
    }

    return 0;
}
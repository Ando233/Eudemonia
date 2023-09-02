//
// Created by Ando on 2023-09-02.
//

#include "Interpreter.h"
#include <fstream>

// statistics
size_t inst_count = 0;
size_t bin_count = 0;
size_t br_count = 0;
size_t call_count = 0;
size_t ptr_count = 0;
size_t load_count = 0;
size_t store_count = 0;
size_t load_bytes = 0;
size_t store_bytes = 0;

void clear_statistics(){
    inst_count = 0;
    bin_count = 0;
    br_count = 0;
    call_count = 0;
    ptr_count = 0;
    load_count = 0;
    store_count = 0;
    load_bytes = 0;
    store_bytes = 0;
}

void Interpreter::execute_inst(Instruction* inst){

}

void Interpreter::execute_function(Function* function){

}

void Interpreter::execute_module(Module* ir_module){

}


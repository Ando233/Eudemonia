//
// Created by Ando on 2023-08-26.
//

#include "BasicBlock.h"
using namespace IR;

#include <fstream>

int BasicBlock::block_num = -1;

void BasicBlock::dump(std::ofstream& out){
    out << name + ":\n";
    for(auto inst : *insts){
        out << "\t";
        inst->dump(out);
    }

}
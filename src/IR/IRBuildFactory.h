//
// Created by Ando on 2023-08-26.
//

#ifndef EUDEMONIA_IRBUILDFACTORY_H
#define EUDEMONIA_IRBUILDFACTORY_H

#include <cstdlib>
#include <string>
#include <utility>
#include "Module.h"
#include "Instruction.h"

using namespace IR;
using OP = Instruction::OP;

class IRBuildFactory {

public:
    static IRBuildFactory getInstance(){
        static IRBuildFactory f;
        return f;
    }

    BasicBlock* build_basic_block(Function* parent_func);
    Function* build_function(std::string name, std::string type, Module module);
    ConversionInst* build_conversion_inst(Value* value, OP op, BasicBlock* bb);

};


#endif //EUDEMONIA_IRBUILDFACTORY_H

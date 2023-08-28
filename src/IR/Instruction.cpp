//
// Created by Ando on 2023-08-26.
//

#include "Instruction.h"
using namespace IR;

//  默认加在末尾
void Instruction::add_operand(Value* _value){
    auto ptr = new Use(_value, this, operands.size());
    _value->add_use(ptr);
    operands.push_back(ptr);
}

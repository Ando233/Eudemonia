//
// Created by Ando on 2023-08-26.
//

#include "BasicBlock.h"
#include "Instruction.h"
using namespace IR;

//  默认加在末尾
void Instruction::add_operand(Value* _value){
    auto ptr = new Use(_value, this, operands.size());
    _value->add_use(ptr);
    operands.push_back(ptr);
}


void BrInst::dump(std::ofstream &out){
    if(is_jump){
        out << "br " << jump_bb->get_name() << "\n";
    }
    else{
        out << "br " + get_cond()->get_name() + " " + true_bb->get_name() + " " + false_bb->get_name() << "\n";
    }
}

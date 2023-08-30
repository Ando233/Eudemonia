//
// Created by Ando on 2023-08-26.
//

#include "BasicBlock.h"
#include "Instruction.h"
#include "Function.h"
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

CallInst::CallInst(Function *_function, std::vector<Value*> values) : Instruction("%" + std::to_string(++Value::val_num), _function->get_type(), OP::call) {
    function = _function;
    for(Value* value : values){
        add_operand(value);
    }
}

void CallInst::dump(std::ofstream& out) {
    if(!type->is_void_type()){
        out << name + " = ";
    }
    out << "call " + function->get_type()->to_string() + " " + function->get_name() + "(";
    for(int i = 0; i < operands.size(); i++){
        Value* value = operands[i]->get_value();
        out << value->get_type()->to_string() << " " << value->get_name();
        if(i != operands.size() - 1){
            out << " ";
        }
    }
    out << ")\n";
}

//
// Created by Ando on 2023-08-26.
//

#ifndef EUDEMONIA_INSTRUCTION_H
#define EUDEMONIA_INSTRUCTION_H

#include "Value.h"
#include "Use.h"

namespace IR {
class BasicBlock;

class Instruction : public Value {
protected:
    using OperandList = std::vector<std::shared_ptr<Use>>;
    OperandList operands;
    BasicBlock* parent_bb;

public:
    Instruction(Type* _type, std::vector<Value*> _operands, std::string _name = "");
    Instruction(Type* _type, std::string _name = "") : Value(_type, _name) {}
    void addOperand(Value* _value);
    OperandList& getOperands() { return operands; }
    void replaceOperand(unsigned index, Value* _value);
    void removeOperand(const std::shared_ptr<Use>& use);
};

};

#endif //EUDEMONIA_INSTRUCTION_H

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
public:
    enum OP{
        Add,
        Fadd,
        Sub,
        Fsub,
        Mul,
        Fmul,
        Div,
        Fdiv,
        Mod,
        Fmod,
        Shl,
        Shr,
        And,
        Or,
        Xor,
        Lt,
        FLt,
        Le,
        FLe,
        Ge,
        FGe,
        Gt,
        FGt,
        Eq,
        FEq,
        Ne,
        FNe,
        //conversion op
        Zext,
        Ftoi,
        Itof,
        //Mem
        Alloca,
        Load,
        Store,
        GEP, //get element ptr
        Phi,
        //terminator op
        Br,
        Call,
        Ret,
        //not op
        Not,
        Move,
        BitCast
    };

private:
    OP op;
    BasicBlock* parent_bb;

protected:
    using OperandList = std::vector<std::shared_ptr<Use>>;
    OperandList operands;

public:
    Instruction(std::string _name, Type* _type, std::vector<Value*> _operands, OP op);
    Instruction(std::string _name, Type* _type, OP op) : Value(_name, _type), op(op) {}
    void add_operand(Value* _value);
    OperandList& get_operands() { return operands; }
    void replace_operand(unsigned index, Value* _value);
    void remove_operand(const std::shared_ptr<Use>& use);
};


//  Conversion Inst
class ConversionInst : public Instruction{
public:
    ConversionInst(Value* value, Type* type, OP op) : Instruction("", type, op){
        add_operand(value);
    }

};

};

#endif //EUDEMONIA_INSTRUCTION_H

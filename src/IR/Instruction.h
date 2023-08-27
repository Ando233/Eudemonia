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
    Instruction(std::string _name, Type* _type, OP op, BasicBlock* bb) : Value(_name, _type), op(op), parent_bb(bb) {}
    void add_operand(Value* _value);
    OperandList& get_operands() { return operands; }
    BasicBlock* get_parent_bb(){
        return parent_bb;
    };

public:
    void replace_operand(unsigned index, Value* _value);
    void remove_operand(const std::shared_ptr<Use>& use);
};

//  Return Inst
class RetInst : public Instruction{
public:
    RetInst(Value* value, BasicBlock* bb) : Instruction("", VoidType::getInstance(), OP::Ret, bb){
        add_operand(value);
    }
};


//  Conversion Inst
class ConversionInst : public Instruction{
public:
    ConversionInst(Value* value, Type* type, OP op, BasicBlock* bb) : Instruction("%" + std::to_string(++Value::val_num), type, op, bb){
        add_operand(value);
    }

};

};

#endif //EUDEMONIA_INSTRUCTION_H

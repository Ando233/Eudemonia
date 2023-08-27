//
// Created by Ando on 2023-08-26.
//

#ifndef EUDEMONIA_INSTRUCTION_H
#define EUDEMONIA_INSTRUCTION_H

#include "Value.h"
#include "Use.h"
#include "Support/IList.h"

namespace IR {
class BasicBlock;

using InstNode = INode<Instruction*, BasicBlock*>;
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
    InstNode* node;

protected:
    using OperandList = std::vector<std::shared_ptr<Use>>;
    OperandList operands;

public:
    Instruction(std::string _name, Type* _type, OP op) : Value(_name, _type), op(op){
        node = new InstNode(this);
    }
    InstNode* get_node(){
        return node;
    }
    void add_operand(Value* _value);
    OperandList& get_operands() { return operands; }
};

//  Return Inst
class RetInst : public Instruction{
public:
    explicit RetInst(Value* value) : Instruction("", VoidType::getInstance(), OP::Ret){
        add_operand(value);
    }
    RetInst() : Instruction("", VoidType::getInstance(), OP::Ret) {}
};


//  Conversion Inst
class ConversionInst : public Instruction{
public:
    ConversionInst(Value* value, Type* type, OP op) : Instruction("%" + std::to_string(++Value::val_num), type, op){
        add_operand(value);
    }

};

};

#endif //EUDEMONIA_INSTRUCTION_H

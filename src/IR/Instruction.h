//
// Created by Ando on 2023-08-26.
//

#ifndef EUDEMONIA_INSTRUCTION_H
#define EUDEMONIA_INSTRUCTION_H

#include <fstream>
#include <utility>
#include "Value.h"
#include "Use.h"
#include "Support/IList.h"


namespace IR {
class BasicBlock;

using InstNode = INode<Instruction*, BasicBlock*>;
class Instruction : public Value {

public:
    enum OP{
        add,
        fadd,
        sub,
        fsub,
        mul,
        fmul,
        div,
        fdiv,
        mod,
        fmod,
        shl,
        shr,
        lt,
        fLt,
        le,
        fLe,
        ge,
        fge,
        ft,
        fgt,
        eq,
        feq,
        ne,
        fee,
        //conversion op
        zext,
        ftoi,
        itof,
        //Mem
        alloca,
        load,
        store,
        gep, //get element ptr
        phi,
        //terminator op
        br,
        call,
        ret,
        //not op
        no,
        move,
        bitcast
    };

private:
    InstNode* node;

protected:
    using OperandList = std::vector<std::shared_ptr<Use>>;
    OperandList operands;

    OP op;
public:
    Instruction(std::string _name, Type* _type, OP op) : Value(std::move(_name), _type), op(op){
        node = new InstNode(this);
    }
    InstNode* get_node(){
        return node;
    }
    void add_operand(Value* _value);
    OperandList& get_operands() { return operands; }
    virtual void dump(std::ofstream& out) {}
};

//  Return Inst
class RetInst : public Instruction{
public:
    explicit RetInst(Value* value) : Instruction("", VoidType::get_instance(), OP::ret){
        add_operand(value);
    }
    RetInst() : Instruction("", VoidType::get_instance(), OP::ret) {}
    Value* get_value(){
        if(operands.empty()) return nullptr;
        return operands[0]->get_value();
    }

    void dump(std::ofstream& out) override {
        out << "return";
        if(!operands.empty()){
            out << " " + get_value()->get_name() << "\n";
        }
    }
};

//  BinaryInst
class BinaryInst : public Instruction{
public:
    BinaryInst(Value* left, Value* right, Type* type, OP op) : Instruction("%" + std::to_string(++Value::val_num), type, op){
        add_operand(left);
        add_operand(right);
    }
    Value* get_left(){
        return operands[0]->get_value();
    }
    Value* get_right(){
        return operands[1]->get_value();
    }
    void dump(std::ofstream& out) override{
        out << name + " = ";
        out << op;
        out << " " + get_left()->get_name() + " " + get_right()->get_name() + "\n";
    }
};


//  Conversion Inst
class ConversionInst : public Instruction{
public:
    ConversionInst(Value* value, Type* type, OP op) : Instruction("%" + std::to_string(++Value::val_num), type, op){
        add_operand(value);
    }
    void dump(std::ofstream& out) override{
        out << "conversion" << "\n";
    }
};

};

#endif //EUDEMONIA_INSTRUCTION_H

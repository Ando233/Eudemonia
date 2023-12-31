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
class Function;

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
        lt,
        flt,
        le,
        fle,
        ge,
        fge,
        ft,
        gt,
        fgt,
        eq,
        feq,
        ne,
        fne,
        //conversion op
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
        bitcast,
        ptradd,
        unknown
    };
    static std::string get_op_name(OP _op){
        switch (_op) {
            case OP::add: return "add";
            case OP::fadd: return "fadd";
            case OP::sub: return "sub";
            case OP::fsub: return "fsub";
            case OP::mul: return "mul";
            case OP::fmul: return "fmul";
            case OP::div: return "div";
            case OP::fdiv: return "fdiv";
            case OP::mod: return "mod";
            case OP::fmod: return "fmod";
            case OP::lt: return "lt";
            case OP::flt: return "flt";
            case OP::le: return "le";
            case OP::fle: return "fle";
            case OP::ge: return "ge";
            case OP::fge: return "fge";
            case OP::ft: return "ft";
            case OP::gt: return "gt";
            case OP::fgt: return "fgt";
            case OP::eq: return "eq";
            case OP::feq: return "feq";
            case OP::ne: return "ne";
            case OP::fne: return "fne";
            case OP::ftoi: return "ftoi";
            case OP::itof: return "itof";
            case OP::alloca: return "alloca";
            case OP::load: return "load";
            case OP::store: return "store";
            case OP::gep: return "gep";
            case OP::phi: return "phi";
            case OP::br: return "br";
            case OP::call: return "call";
            case OP::ret: return "ret";
            case OP::no: return "no";
            case OP::move: return "move";
            case OP::bitcast: return "bitcast";
            default: return "Unknown";
        }
    }
    static OP str_to_op(std::string str){
        if (str == "+") {
            return OP::add;
        } else if (str == "+f") {
            return OP::fadd;
        } else if (str == "-") {
            return OP::sub;
        } else if (str == "-f") {
            return OP::fsub;
        } else if (str == "*") {
            return OP::mul;
        } else if (str == "*f") {
            return OP::fmul;
        } else if (str == "/") {
            return OP::div;
        } else if (str == "/f") {
            return OP::fdiv;
        } else if (str == "%") {
            return OP::mod;
        } else if (str == "%f") {
            return OP::fmod;
        } else if (str == "<=") {
            return OP::le;
        } else if (str == "<=f") {
            return OP::fle;
        } else if (str == "<") {
            return OP::lt;
        } else if (str == "<f") {
            return OP::flt;
        } else if (str == ">=") {
            return OP::ge;
        } else if (str == ">=f") {
            return OP::fge;
        } else if (str == ">") {
            return OP::gt;
        } else if (str == ">f") {
            return OP::fgt;
        } else if (str == "==") {
            return OP::eq;
        } else if (str == "==f") {
            return OP::feq;
        } else if (str == "!=") {
            return OP::ne;
        } else if (str == "!=f") {
            return OP::fne;
        } else if (str == "ftoi") {
            return OP::ftoi;
        } else if (str == "itof") {
            return OP::itof;
        } else if (str == "bitcast") {
            return OP::bitcast;
        } else {
            return OP::unknown;
        }
    }
private:
    InstNode* node;

protected:
    using OperandList = std::vector<Use*>;
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

class LoadInst : public Instruction{
public:
    LoadInst(Value* pointer, Type* type) : Instruction("%" + std::to_string(++Value::val_num), type, OP::load){
        add_operand(pointer);
    }

    Value* get_pointer(){
        return operands[0]->get_value();
    }

    void dump(std::ofstream &out){
        out << name + " = load " + get_pointer()->get_name() << "\n";
    }
};

class StoreInst : public Instruction{
public:
    StoreInst(Value* value, Value* pointer) : Instruction("", VoidType::get_instance(), OP::store){
        add_operand(value);
        add_operand(pointer);
    }

    Value* get_value(){
        return operands[0]->get_value();
    }

    Value* get_pointer(){
        return operands[1]->get_value();
    }

    void dump(std::ofstream& out) override{
        out << "store " + get_value()->get_name() + ", " + get_pointer()->get_name() << "\n";
    }
};

class AllocInst : public Instruction{
private:
    int size = -1;
public:
    AllocInst(int _size, Type* type) : Instruction("%" + std::to_string(++Value::val_num), type, OP::alloca){
        size = _size;
    }

    Type* get_alloc_type(){
        return dynamic_cast<PointerType*>(type)->get_ele_type();
    }

    bool is_array(){
        return size > 1;
    }

    void dump(std::ofstream& out) override{
        out << name + " = alloc ";
        if(size == 1) {
            out << get_alloc_type()->to_string() + "\n";
        }
        else{
            out << "[" + std::to_string(size) + " x " + get_alloc_type()->to_string() + "]\n";
        }
    }
};

class CallInst : public Instruction{
private:
    Function* function;
public:
    CallInst(Function* _function, std::vector<Value*> values);
    void dump(std::ofstream& out) override;
    Function* get_function(){
        return function;
    }
    std::vector<Value*> get_values(){
        std::vector<Value*> values;
        for(auto use : get_operands()){
            values.push_back(use->get_value());
        }
        return values;
    }
};

class PtrInst : public Instruction{
public:
    PtrInst(Value* pointer, Value* add_value) : Instruction("%" + std::to_string(++Value::val_num), pointer->get_type(), OP::ptradd){
        add_operand(pointer);
        add_operand(add_value);
    }

    Value* get_pointer(){
        return operands[0]->get_value();
    }

    Value* get_value(){
        return operands[1]->get_value();
    }

    void dump(std::ofstream &out) override{
        out << name + " = ptradd " + get_pointer()->get_name() + ", " + get_value()->get_name() + "\n";
    }
};

class BrInst : public Instruction{
public:
    BrInst(BasicBlock* _jump_bb) : Instruction("", VoidType::get_instance(), OP::br){
        is_jump = true;
        jump_bb = _jump_bb;
    }
    BrInst(Value* cond, BasicBlock* _true_bb, BasicBlock* _false_bb) : Instruction("", VoidType::get_instance(), OP::br){
        is_jump = false;
        add_operand(cond);
        true_bb = _true_bb;
        false_bb = _false_bb;
    }

    Value* get_cond(){
        return operands[0]->get_value();
    }

    void dump(std::ofstream &out) override;

private:
    bool is_jump;
    BasicBlock* true_bb;
    BasicBlock* false_bb;
    BasicBlock* jump_bb;
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
        out << get_op_name(op);
        out << " " + get_left()->get_name() + " " + get_right()->get_name() + "\n";
    }
};


//  Conversion Inst
class ConversionInst : public Instruction{
public:
    ConversionInst(Value* value, Type* type, OP op) : Instruction("%" + std::to_string(++Value::val_num), type, op){
        add_operand(value);
    }
    Value* get_value(){
        return operands[0]->get_value();
    }
    void dump(std::ofstream& out) override{
        if(op == OP::itof) {
            out << name + " = itof " + get_value()->get_name() << '\n';
        }
        else if(op == OP::ftoi){
            out << name + " = ftoi " + get_value()->get_name() << '\n';
        }
    }
};

};

#endif //EUDEMONIA_INSTRUCTION_H

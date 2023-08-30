//
// Created by Ando on 2023-08-26.
//

#ifndef EUDEMONIA_FUNCTION_H
#define EUDEMONIA_FUNCTION_H

#include "Type.h"
#include "Value.h"
#include "Instruction.h"
#include "BasicBlock.h"
#include "Support/IList.h"

namespace IR {

class Argument : public Value {
private:
    Function* parent_func;
public:
    Argument(std::string name, Type* type, Function* _parent_func) : Value(name, type){
        parent_func = _parent_func;
    }

    void dump(std::ofstream &out){
        out << get_type()->to_string() + " " + get_name();
    }
};

class Function : public Value {
private:
    using ArgList = std::vector<Argument*>;
    using BbList = IList<BasicBlock*, Function*>;
    ArgList args;
    BbList* bbs;

public:
    Function(std::string _name, Type* _type) : Value(std::move(_name), _type) {
        bbs = new BbList(this);
    };
    BbList* get_bbs(){ return bbs; }
    void add_bb(BasicBlock* bb) {
        bbs->add(bb->get_node());
    }
    void add_arg(Argument* arg){
        args.push_back(arg);
    }
    void dump(std::ofstream& out);
};
}

#endif //EUDEMONIA_FUNCTION_H

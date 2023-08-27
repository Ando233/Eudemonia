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

class Argument : public Value{
public:
    Argument(std::string _name, Type* _type) : Value(_name, _type) {}

};

class Function : public Value {
private:
    using ArgList = std::vector<std::unique_ptr<Argument>>;
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
};
}

#endif //EUDEMONIA_FUNCTION_H

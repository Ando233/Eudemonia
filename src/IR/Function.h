//
// Created by Ando on 2023-08-26.
//

#ifndef EUDEMONIA_FUNCTION_H
#define EUDEMONIA_FUNCTION_H

#include "Type.h"
#include "Value.h"
#include "Instruction.h"
#include "BasicBlock.h"

namespace IR {

class Argument : public Value{
public:
    Argument(std::string _name, Type* _type) : Value(_name, _type) {}

};

class Function : public Value {
private:
    using ArgList = std::vector<std::unique_ptr<Argument>>;
    using BbList = std::list<BasicBlock*>;
    ArgList args;
    BbList bbs;
    Type* retType;

public:
    Function(std::string _name, Type* _type) : Value(_name, _type) {};
    ArgList& getArgs() { return args; }
    BbList& getBbs(){ return bbs; }
    Type* getRetType() { return retType; }
};
}

#endif //EUDEMONIA_FUNCTION_H

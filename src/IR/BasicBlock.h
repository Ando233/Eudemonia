//
// Created by Ando on 2023-08-26.
//

#ifndef EUDEMONIA_BASICBLOCK_H
#define EUDEMONIA_BASICBLOCK_H

#include <iostream>
#include <list>

#include "Value.h"
#include "Instruction.h"

namespace IR {
class Function;

class BasicBlock : public Value {
private:
    Function* parent_func;
    std::list<Instruction*> instructions;

public:
    BasicBlock(const std::string name) : Value(name, LabelType::getInstance()) {}
    BasicBlock(const std::string name, Function* func) : Value(name, LabelType::getInstance()), parent_func(func) {}
    std::list<Instruction*>& getInstructions() { return instructions; }
    using iterator = std::list<Instruction*>::iterator;
    using reverse_iterator = std::list<Instruction*>::reverse_iterator;
    iterator begin() { return instructions.begin(); }
    iterator end() { return instructions.end(); }
    reverse_iterator rbegin() { return instructions.rbegin(); }
    reverse_iterator rend() { return instructions.rend(); }

    void insert_back(Instruction* instr) { instructions.push_back(instr); }
    void insert_front(Instruction* instr) { instructions.push_front(instr); }
    Function* get_parent(){return parent_func;}

public:
    std::string to_string() override;
    void insert_before_terminal(Instruction* instr);
};
}


#endif //EUDEMONIA_BASICBLOCK_H

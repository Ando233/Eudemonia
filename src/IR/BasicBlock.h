//
// Created by Ando on 2023-08-26.
//

#ifndef EUDEMONIA_BASICBLOCK_H
#define EUDEMONIA_BASICBLOCK_H

#include <iostream>
#include <list>
#include "Support/IList.h"
#include "Value.h"
#include "Instruction.h"

namespace IR {
class Function;

using BbNode = INode<BasicBlock*, Function*>;
using InstList = IList<Instruction*, BasicBlock*>;
class BasicBlock : public Value {
private:
    BbNode* node;
    InstList* insts;

public:
    static int block_num;
    BasicBlock() : Value("block" + std::to_string(++BasicBlock::block_num), LabelType::getInstance()) {
        node = new BbNode(this);
        insts = new InstList(this);
    }
    BbNode* get_node(){
        return node;
    };
    Function* get_parent_func(){
        return node->get_parent()->get_value();
    }

    InstList* get_insts() { return insts; }

    void add_inst(Instruction* inst) {
        insts->add(inst->get_node());
    }
    void add_inst_to_head(Instruction* inst) {
        insts->add_to_head(inst->get_node());
    }
    void dump(std::ofstream& out);

};

}


#endif //EUDEMONIA_BASICBLOCK_H

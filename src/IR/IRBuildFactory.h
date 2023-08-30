//
// Created by Ando on 2023-08-26.
//

#ifndef EUDEMONIA_IRBUILDFACTORY_H
#define EUDEMONIA_IRBUILDFACTORY_H

#include <cstdlib>
#include <string>
#include <utility>
#include "Module.h"
#include "Instruction.h"
#include "Const.h"

using namespace IR;
using OP = Instruction::OP;

class IRBuildFactory {

private:
    Value *turn_type(Value *value, Type *type, BasicBlock *bb);
    int calculate(int a, int b, const std::string& op);
    float calculate(float a, float b, const std::string& op);

public:
    static IRBuildFactory getInstance(){
        static IRBuildFactory f;
        return f;
    }

    CallInst* build_call_inst(Function* func, std::vector<Value*> values, BasicBlock* bb);
    Argument* build_arg(std::string name, std::string type, Function* function);
    BrInst* build_br_inst(BasicBlock* jump_bb, BasicBlock* bb);
    BrInst* build_br_inst(Value* cond, BasicBlock* true_bb, BasicBlock* false_bb, BasicBlock* bb);
    LoadInst* build_load_inst(Value* pointer, BasicBlock* bb);
    StoreInst* build_store_inst(Value* value, Value* pointer, BasicBlock* bb);
    AllocInst* build_alloc_inst(Type* type, BasicBlock* bb);
    Const* build_cal_number(Const* left, Const* right, std::string op);
    BinaryInst* build_bin_inst(Value* left, Value* right, OP op, BasicBlock* bb);
    RetInst* build_ret_inst(BasicBlock* bb);
    RetInst* build_ret_inst(Value* value, BasicBlock* bb);
    ConstFloat* build_number(float val);
    ConstInt* build_number(int val);
    BasicBlock* build_basic_block(Function* parent_func);
    Function* build_function(std::string name, std::string type, Module* module);
    ConversionInst* build_conversion_inst(Value* value, OP op, BasicBlock* bb);

};


#endif //EUDEMONIA_IRBUILDFACTORY_H

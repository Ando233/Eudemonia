//
// Created by Ando on 2023-08-26.
//

#include "IRBuildFactory.h"
using OP = Instruction::OP;

RetInst* IRBuildFactory::build_ret_inst(Value* value, BasicBlock* bb){
    auto ret_inst = new RetInst(value, bb);
    bb->add_inst(ret_inst);
    return ret_inst;
}

ConstFloat* IRBuildFactory::build_number(float val){
    return new ConstFloat(val);
}

ConstInt* IRBuildFactory::build_number(int val){
    return new ConstInt(val, IntegerType::getI32Instance());
}

Function* IRBuildFactory::build_function(std::string name, std::string type, Module* module){
    Function* function;
    if(type == "int"){
        function = new Function(name, IntegerType::getI32Instance());
    }
    else if(type == "float"){
        function = new Function(name, FloatType::getInstance());
    }
    else{
        function = new Function(name, VoidType::getInstance());
    }
    module->add_function(function);
    return function;
}

BasicBlock* IRBuildFactory::build_basic_block(IR::Function *parent_func) {
    auto bb = new BasicBlock(parent_func);
    parent_func->add_bb(bb);
    return bb;
}

ConversionInst* IRBuildFactory::build_conversion_inst(Value* value, OP op, BasicBlock* bb){
    Type *type = nullptr;
    if(op == OP::Ftoi || op == OP::Zext){
        type = IntegerType::getI32Instance();
    }
    else if(op == OP::Itof){
        type = FloatType::getInstance();
    }
    else if(op == OP::BitCast){
        type = PointerType::getI32PtrInstance();
    }

    auto conversion_inst = new ConversionInst(value, type, op, bb);
    bb->add_inst(conversion_inst);
    return conversion_inst;
}
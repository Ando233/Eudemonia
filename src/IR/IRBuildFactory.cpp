//
// Created by Ando on 2023-08-26.
//

#include "IRBuildFactory.h"
using OP = Instruction::OP;


BinaryInst* IRBuildFactory::build_bin_inst(Value* left, Value* right, OP op, BasicBlock* bb){
    Type* type;
    Type* left_type = left->get_type();
    Type* right_type = right->get_type();

    return nullptr;
}

RetInst* IRBuildFactory::build_ret_inst(BasicBlock* bb){
    auto ret_inst = new RetInst();
    bb->add_inst(ret_inst);
    return ret_inst;
}

RetInst* IRBuildFactory::build_ret_inst(Value* value, BasicBlock* bb){
    auto ret_inst = new RetInst(value);
    bb->add_inst(ret_inst);
    return ret_inst;
}

ConstFloat* IRBuildFactory::build_number(float val){
    return new ConstFloat(val);
}

ConstInt* IRBuildFactory::build_number(int val){
    return new ConstInt(val);
}

Function* IRBuildFactory::build_function(std::string name, std::string type, Module* module){
    Function* function;
    if(type == "int"){
        function = new Function(name, IntegerType::get_instance());
    }
    else if(type == "float"){
        function = new Function(name, FloatType::get_instance());
    }
    else{
        function = new Function(name, VoidType::get_instance());
    }
    module->add_function(function);
    return function;
}

BasicBlock* IRBuildFactory::build_basic_block(IR::Function *parent_func) {
    auto bb = new BasicBlock();
    parent_func->add_bb(bb);
    return bb;
}

ConversionInst* IRBuildFactory::build_conversion_inst(Value* value, OP op, BasicBlock* bb){
    Type *type = nullptr;
    if(op == OP::ftoi || op == OP::zext){
        type = IntegerType::get_instance();
    }
    else if(op == OP::itof){
        type = FloatType::get_instance();
    }
    else if(op == OP::bitcast){
        type = PointerType::get_i32_ptr_instance();
    }

    auto conversion_inst = new ConversionInst(value, type, op);
    bb->add_inst(conversion_inst);
    return conversion_inst;
}
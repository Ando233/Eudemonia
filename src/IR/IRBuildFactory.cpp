//
// Created by Ando on 2023-08-26.
//

#include "IRBuildFactory.h"
using OP = Instruction::OP;

ConversionInst* IRBuildFactory::build_conversion_inst(Value* value, OP op, BasicBlock* bb){
    Type *type = nullptr;
    if(op == OP::ftoi){
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

Value* IRBuildFactory::turn_type(Value* value, Type* type, BasicBlock* bb){
    Type* ori_type = value->get_type();
    if(ori_type == IntegerType::get_instance() && type == FloatType::get_instance()){
        return build_conversion_inst(value, OP::itof, bb);
    }
    else if(ori_type == FloatType::get_instance() && type == IntegerType::get_instance()){
        return build_conversion_inst(value, OP::ftoi, bb);
    }
    return nullptr;
}

OP turn_to_float(OP _op){
    if(_op == OP::add) return OP::fadd;
    else if(_op == OP::sub) return OP:: fsub;
    else if(_op == OP::mul) return OP::fmul;
    else if(_op == OP::div) return OP::fdiv;
    else if(_op == OP::mod) return OP::fmod;
    else if(_op == OP::lt) return OP::flt;
    else if(_op == OP::le) return OP::fle;
    else if(_op == OP::gt) return OP::fgt;
    else if(_op == OP::ge) return OP::fge;
    else return _op;
}

BinaryInst* IRBuildFactory::build_bin_inst(Value* left, Value* right, OP op, BasicBlock* bb){
    Type* type;
    Type* left_type = left->get_type();
    Type* right_type = right->get_type();
    if(left_type != right_type) {
        if (left_type == FloatType::get_instance() && right_type == IntegerType::get_instance()) {
            right = turn_type(right, FloatType::get_instance(), bb);
            type = FloatType::get_instance();
        }
        if (right_type == FloatType::get_instance() && left_type == IntegerType::get_instance()) {
            left = turn_type(left, FloatType::get_instance(), bb);
            type = FloatType::get_instance();
        }
    }
    else{
        type = left_type;
    }

    if(type == FloatType::get_instance()){
        op = turn_to_float(op);
    }

    auto bin_inst = new BinaryInst(left, right, type, op);
    bb->add_inst(bin_inst);

    return bin_inst;
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
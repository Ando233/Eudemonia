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

int IRBuildFactory::calculate(int a, int b, const std::string& op) {
    if (op == "+") {
        return a + b;
    } else if (op == "-") {
        return a - b;
    } else if (op == "*") {
        return a * b;
    } else if (op == "/") {
        return a / b;
    } else if (op == "%") {
        return a % b;
    } else if (op == "<") {
        return a < b ? 1 : 0;
    } else if (op == "<=") {
        return a <= b ? 1 : 0;
    } else if (op == ">") {
        return a > b ? 1 : 0;
    } else if (op == ">=") {
        return a >= b ? 1 : 0;
    } else if (op == "==") {
        return a == b ? 1 : 0;
    } else if (op == "!=") {
        return a != b ? 1 : 0;
    } else {
        return 0;
    }
}

float IRBuildFactory::calculate(float a, float b, const std::string& op) {
    if (op == "+") {
        return a + b;
    } else if (op == "-") {
        return a - b;
    } else if (op == "*") {
        return a * b;
    } else if (op == "/") {
        return a / b;
    } else if (op == "%") {
        return std::fmod(a, b);
    } else if (op == "<") {
        return a < b ? 1.0f : 0.0f;
    } else if (op == "<=") {
        return a <= b ? 1.0f : 0.0f;
    } else if (op == ">") {
        return a > b ? 1.0f : 0.0f;
    } else if (op == ">=") {
        return a >= b ? 1.0f : 0.0f;
    } else if (op == "==") {
        return a == b ? 1.0f : 0.0f;
    } else if (op == "!=") {
        return a != b ? 1.0f : 0.0f;
    } else {
        return 0.0f;
    }
}

StoreInst* IRBuildFactory::build_store_inst(Value* value, Value* pointer, BasicBlock* bb){
    Type* value_type = value->get_type();
    Type* ele_type = dynamic_cast<PointerType*>(pointer->get_type())->get_ele_type();
    if(value_type == IntegerType::get_instance() && ele_type == FloatType::get_instance()){
        if(auto const_int = dynamic_cast<ConstInt*>(value)){
            value = build_number((float) const_int->get_value());
        }
        else{
            value = build_conversion_inst(value, OP::itof, bb);
        }
    }
    else if(value_type == FloatType::get_instance() && ele_type == IntegerType::get_instance()){
        if(auto const_float = dynamic_cast<ConstFloat*>(value)){
            value = build_number((int) const_float->get_value());
        }
        else{
            value = build_conversion_inst(value, OP::ftoi, bb);
        }
    }

    auto store_inst = new StoreInst(value, pointer);
    bb->add_inst(store_inst);
    return store_inst;
}

GlobalVar* IRBuildFactory::build_global_var(std::string name, Type* type, Value* value){
    return new GlobalVar("@" + name, new PointerType(type), value);
}

CallInst* IRBuildFactory::build_call_inst(Function* func, std::vector<Value*> values, BasicBlock* bb){
    auto callInst = new CallInst(func, values);
    bb->add_inst(callInst);

    return callInst;
}

BrInst* IRBuildFactory::build_br_inst(BasicBlock* jump_bb, BasicBlock* bb){
    auto br_inst = new BrInst(jump_bb);
    bb->add_inst(br_inst);
    return br_inst;
}

BrInst* IRBuildFactory::build_br_inst(Value* cond, BasicBlock* true_bb, BasicBlock* false_bb, BasicBlock* bb){
    auto br_inst = new BrInst(cond, true_bb, false_bb);
    bb->add_inst(br_inst);
    return br_inst;
}

Argument* IRBuildFactory::build_arg(std::string name, std::string type_str, Function* function){
    Argument* argument;

    if (type_str == "int") {
        argument = new Argument(name, IntegerType::get_instance(), function);
    } else if (type_str == "float") {
        argument = new Argument(name, FloatType::get_instance(), function);
    } else if (type_str == "int*") {
        argument = new Argument(name, PointerType::get_i32_ptr_instance(), function);
    } else if (type_str == "float*") {
        argument = new Argument(name, PointerType::get_f32_ptr_instance(), function);
    } else {
        argument = new Argument(name, VoidType::get_instance(), function);
    }

    function->add_arg(argument);
    return argument;
}

LoadInst* IRBuildFactory::build_load_inst(Value* pointer, BasicBlock* bb){
    Type* type = dynamic_cast<PointerType*>(pointer->get_type())->get_ele_type();
    auto load_inst = new LoadInst(pointer, type);
    bb->add_inst(load_inst);
    return load_inst;
}

AllocInst* IRBuildFactory::build_alloc_inst(Type* type, BasicBlock* bb){
    Type* pointer_type = new PointerType(type);
    auto alloc_inst = new AllocInst(pointer_type);
    bb->add_inst(alloc_inst);
    return alloc_inst;
}

Const* IRBuildFactory::build_cal_number(Const* left, Const* right, std::string op){
    auto left_int = dynamic_cast<ConstInt*>(left);
    auto left_float = dynamic_cast<ConstFloat*>(left);
    auto right_int = dynamic_cast<ConstInt*>(right);
    auto right_float = dynamic_cast<ConstFloat*>(right);
    if(left_int && right_int){
        return build_number(calculate(left_int->get_value(), right_int->get_value(), op));
    }
    else if(left_float && right_float){
        return build_number(calculate(left_float->get_value(), right_float->get_value(), op));
    }
    else if(left_int && right_float){
        return build_number(calculate((float) left_int->get_value(), right_float->get_value(), op));
    }
    else if(left_float && right_int){
        return build_number(calculate(left_float->get_value(), (float) right_int->get_value(), op));
    }
    return nullptr;
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
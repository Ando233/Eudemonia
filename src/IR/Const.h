//
// Created by Ando on 2023-08-26.
//

#ifndef EUDEMONIA_CONST_H
#define EUDEMONIA_CONST_H


#include "Value.h"
namespace IR {

class Const : public Value {
public:
    Const(std::string name, Type *type) : Value(name, type) {}
    bool is_const() override{
        return true;
    }
};

//  ConstInt
class ConstInt : public Const{
private:
    int val;
public:
    ConstInt(int _val) : Const(std::to_string(_val), IntegerType::get_instance()) {
        val = _val;
    }
    int get_value(){
        return val;
    }
    bool is_const_int() override{
        return true;
    }
};

//  ConstFloat
class ConstFloat : public Const{
private:
    float val;
public:
    ConstFloat(float _val) : Const(std::to_string(_val), FloatType::get_instance()) {
        val = _val;
    }
    float get_value(){
        return val;
    }
    bool is_const_float() override{
        return true;
    }
};

}


#endif //EUDEMONIA_CONST_H

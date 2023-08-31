//
// Created by Ando on 2023-08-26.
//

#ifndef EUDEMONIA_GLOBALVAR_H
#define EUDEMONIA_GLOBALVAR_H

#include "Value.h"
#include <fstream>

using namespace IR;
class GlobalVar : public Value {
private:
    Value* value;
    bool is_array;
public:
    GlobalVar(std::string name, Type* type, Value* _value) : Value(name, type){
        value = _value;
        is_array = false;
    }

    Value* get_value(){
        return value;
    }

    void dump(std::ofstream &out){
        out << name + " = global ";
        out << get_value()->get_name();
    }
};


#endif //EUDEMONIA_GLOBALVAR_H

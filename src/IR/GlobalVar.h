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
    Value* value{};
    int size;
    std::vector<Value*> values;
public:
    GlobalVar(std::string name, Type* type, Value* _value) : Value(name, type){
        value = _value;
        size = 1;
    }

    GlobalVar(std::string name, Type* type, std::vector<Value*> _values) : Value(name, type){
        values = _values;
        size = _values.size();
    }

    Value* get_value(){
        return value;
    }

    bool is_array(){
        return size > 1;
    }

    void dump(std::ofstream &out){
        out << name + " = global " + get_type()->to_string() + " ";
        if(size != 1){
            out << "[";
            for(int i = 0; i < values.size(); i++){
                out << values[i]->get_name();
                if(i != values.size() - 1) out << ", ";
            }
            out << "]";
        }
        else {
            out << get_value()->get_name();
        }
    }
};


#endif //EUDEMONIA_GLOBALVAR_H

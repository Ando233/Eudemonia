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
    bool _is_array;
    std::vector<Value*> values;
public:
    GlobalVar(std::string name, Type* type, Value* _value) : Value(name, type){
        value = _value;
        _is_array = false;
    }

    GlobalVar(std::string name, Type* type, std::vector<Value*> values) : Value(name, type){
        values = values;
        _is_array = true;
        value = nullptr;
    }

    Value* get_value(){
        return value;
    }

    bool is_array(){
        return _is_array;
    }

    void dump(std::ofstream &out){
        out << name + " = global " + get_type()->to_string() + " ";
        if(is_array()){
            out << "[";
            for(int i = 0; i < values.size(); i++){
                out << value->get_type()->to_string() + " " + value->get_name();
                if(i != values.size() - 1) out << " ";
            }
            out << "]";
        }
        else {
            out << get_value()->get_name();
        }
    }
};


#endif //EUDEMONIA_GLOBALVAR_H

//
// Created by Ando on 2023-08-26.
//

#ifndef EUDEMONIA_VALUE_H
#define EUDEMONIA_VALUE_H

#include <iostream>
#include <list>
#include <utility>
#include "Type.h"
#include "Use.h"

namespace IR{

class Value{
protected:
    std::string name;
    Type* type;
    std::list<Use*> uses;
public:
    static int val_num;
    Value(std::string _name, Type* _type) : name(std::move(_name)), type(_type) {}
    std::string get_name() { return name; }
    Type* get_type() { return type; }
    void add_use(Use* use) { uses.push_back(use); }
    std::list<Use*>& getUses() { return uses; };
    virtual bool is_const(){
        return false;
    }
    virtual bool is_const_int(){
        return false;
    }
    virtual bool is_const_float(){
        return false;
    }
};
}

#endif //EUDEMONIA_VALUE_H

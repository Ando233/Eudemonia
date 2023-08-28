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
    std::list<std::shared_ptr<Use>> uses;
public:
    static int val_num;
    Value(std::string _name, Type* _type) : name(std::move(_name)), type(_type) {}
    std::string get_name() { return name; }
    Type* get_type() { return type; }
    void set_type(Type* _type) { type = _type; }
    void set_name(std::string _name) { name = std::move(_name); }
    void add_use(std::shared_ptr<Use> use) { uses.push_back(use); }
    void remove_use(const std::shared_ptr<Use>& use) { uses.remove(use); }
    std::list<std::shared_ptr<Use>>& getUses() { return uses; };
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

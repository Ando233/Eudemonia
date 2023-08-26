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
    Value(std::string _name, Type* _type) : name(std::move(_name)), type(_type) {}
    std::string getName() { return name; }
    Type* getType() { return type; }
    void setType(Type* _type) { type = _type; }
    void setName(std::string _name) { name = _name; }
    void addUse(std::shared_ptr<Use> use) { uses.push_back(use); }
    void removeUse(const std::shared_ptr<Use>& use) { uses.remove(use); }
    std::list<std::shared_ptr<Use>>& getUses() { return uses; };
    void replaceAllUseWith(Value* value);
    void removeAllUseWith();
    virtual std::string to_string();
};

}

#endif //EUDEMONIA_VALUE_H

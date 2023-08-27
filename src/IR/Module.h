//
// Created by Ando on 2023-08-25.
//

#ifndef EUDEMONIA_MODULE_H
#define EUDEMONIA_MODULE_H

#include "Function.h"
#include "GlobalVar.h"
#include <list>
#include <utility>

namespace IR {
class Module final {
private:
    using FuncList = std::list<Function*>;
    using GlobalVarList = std::list<GlobalVar*>;
    FuncList functions;
    GlobalVarList global_vars;
public:
    Module(){

    }
    void add_function(Function* function){ functions.push_back(function); }
    FuncList get_functions(){ return functions; }
    void dump(std::ofstream& out);
};
}


#endif //EUDEMONIA_MODULE_H

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
    using FuncList = std::vector<Function*>;
    using GlobalVarList = std::vector<GlobalVar*>;
    FuncList functions;
    GlobalVarList global_vars;
public:
    Module(){

    }
    void add_function(Function* function){ functions.push_back(function); }
    FuncList get_functions(){ return functions; }
    void add_global_var(GlobalVar* global_var){
        global_vars.push_back(global_var);
    }
    void dump(std::ofstream& out);
};
}


#endif //EUDEMONIA_MODULE_H

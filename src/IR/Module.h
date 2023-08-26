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
    Module() = default;
    Module(FuncList funcs, GlobalVarList gvs) : functions(std::move(funcs)), global_vars(std::move(gvs)) {};

};
}


#endif //EUDEMONIA_MODULE_H

//
// Created by Ando on 2023-08-25.
//

#include "Module.h"
using namespace IR;

#include <fstream>

void Module::dump(std::ofstream& out) {
    for(auto global_var : global_vars){
        global_var->dump(out);
        out << "\n";
    }
    for(auto func : functions){
        func->dump(out);
        out << '\n';
    }
}

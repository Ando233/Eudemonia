//
// Created by Ando on 2023-08-26.
//

#include <fstream>
#include "Function.h"
using namespace IR;

void Function::dump(std::ofstream& out){
    std::string ir_type;
    if(type->is_integer_type()){
        ir_type = "int";
    }
    else if(type->is_float_type()){
        ir_type = "float";
    }
    else ir_type = "void";

    out << ir_type + " " + name + "(";
    for(int i = 0; i < args.size(); i++){
        args[i]->dump(out);
        if(i != args.size() - 1) {
            out << " ";
        }
    }
    out << ") {\n";

    for(auto bb : *bbs){
        bb->dump(out);
    }
    out << "}\n";
}

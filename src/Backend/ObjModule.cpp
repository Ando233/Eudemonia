//
// Created by Ando on 2023-08-29.
//

#include "ObjModule.h"
#include "IR/Module.h"
#include <fstream>
#include <iostream>

void ObjModule::dump(std::ofstream& out){
    out << "\t.text\n";
    out << "\t.globl main\n";

}

ObjModule::ObjModule(IR::Module *ir_module) {

}
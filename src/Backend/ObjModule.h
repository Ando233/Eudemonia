//
// Created by Ando on 2023-08-29.
//

#ifndef EUDEMONIA_OBJMODULE_H
#define EUDEMONIA_OBJMODULE_H

#include <cstdlib>
#include <fstream>
#include "IR/Module.h"

class ObjModule {
public:
    ObjModule(IR::Module* ir_module);
    void dump(std::ofstream& out);
};


#endif //EUDEMONIA_OBJMODULE_H

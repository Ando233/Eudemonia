//
// Created by Ando on 2023-08-26.
//

#ifndef EUDEMONIA_VISITOR_H
#define EUDEMONIA_VISITOR_H

#include "Frontend/SysYBaseVisitor.h"
#include "Module.h"

namespace IR{

    class Visitor : public SysYBaseVisitor{
    private:
        IR::Module ir_module;
    public:
        Visitor(IR::Module &ir_module) : ir_module(ir_module) {}

    };
}


#endif //EUDEMONIA_VISITOR_H

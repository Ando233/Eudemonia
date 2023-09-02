//
// Created by Ando on 2023-09-02.
//

#ifndef EUDEMONIA_INTERPRETER_H
#define EUDEMONIA_INTERPRETER_H

#include <cstdlib>
#include "IR/Module.h"

enum class SimulationFailReason {
    ExceedMemoryLimit,        //
    ExceedTimeLimit,          //
    ExceedMaxRecursiveDepth,  //
    MemoryError,              //
    DividedByZero,            //
    UnknownError,             //
    UnsupportedTarget,        //
    UnsupportedHost,          //
    Undefined,                //
    Unreachable,              //
    EnterNoreturnFunc,        //
    NoEntry,                  //
    RuntimeError
};

class Interpreter {
private:
    size_t time_budget,      // in ns
    mem_budget,          // in bytes
    max_recursive_depth;  //
    bool dump_statistics;
public:
    Interpreter(size_t _time_budget, size_t _mem_budget, size_t _max_recursive_depth, bool _dump_statistics)
            : time_budget{ _time_budget }, mem_budget{ _mem_budget },
            max_recursive_depth{ _max_recursive_depth },
            dump_statistics{ _dump_statistics } {}

    void execute_module(Module* ir_module);
    void execute_function(Function* function);
    void execute_inst(Instruction* inst);

};


#endif //EUDEMONIA_INTERPRETER_H

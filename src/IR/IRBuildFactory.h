//
// Created by Ando on 2023-08-26.
//

#ifndef EUDEMONIA_IRBUILDFACTORY_H
#define EUDEMONIA_IRBUILDFACTORY_H

#include <cstdlib>
#include <string>
#include <utility>
#include "Module.h"

using namespace IR;
class IRBuildFactory {

public:
    static IRBuildFactory getInstance(){
        static IRBuildFactory f;
        return f;
    }

    Function* build_function(std::string name, std::string type, Module module){
        Function* function;
        if(type == "int"){
            function = new Function(name, IntegerType::getI32Instance());
        }
        else if(type == "float"){
            function = new Function(name, FloatType::getInstance());
        }
        else{
            function = new Function(name, VoidType::getInstance());
        }
        module.add_function(function);
        return function;
    }
};


#endif //EUDEMONIA_IRBUILDFACTORY_H

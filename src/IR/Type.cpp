//
// Created by Ando on 2023-08-26.
//

#include "Type.h"
using namespace IR;


Type* Type::getLabelTy() {
    return LabelType::getInstance();
}

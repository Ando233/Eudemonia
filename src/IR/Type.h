//
// Created by Ando on 2023-08-26.
//

#ifndef EUDEMONIA_TYPE_H
#define EUDEMONIA_TYPE_H

#include <iostream>

namespace IR {

class Type {
public:
    enum TypeID{
        FloatTyID,     ///< 32-bit floating point type
        VoidTyID,      ///< type with no size
        LabelTyID,     ///< Labels
        IntegerTyID,       ///< Arbitrary bit width integers
        FunctionTyID,      ///< Functions
        PointerTyID,       ///< Pointers
        ArrayTyID,         ///< Arrays
        FixedVectorTyID,   ///< Fixed width SIMD vector type
        ScalableVectorTyID, ///< Scalable SIMD vector type
    };

private:
    TypeID ID;

protected:
    explicit Type(TypeID id) :
            ID(id) {}

    TypeID getTypeId() { return ID; }

public:
    bool isFloatTy() { return getTypeId() == FloatTyID; }
    bool isVoidTy() { return getTypeId() == VoidTyID; }
    bool isLabelTy() { return getTypeId() == LabelTyID; }
    bool isIntegerTy() { return getTypeId() == IntegerTyID; }
    bool isIntegerTy(unsigned width);
    bool isFunctionTy() { return getTypeId() == FunctionTyID; }
    bool isPointerTy() { return getTypeId() == PointerTyID; }
    bool isVectorTy() { return getTypeId() == FixedVectorTyID || getTypeId() == ScalableVectorTyID; }
    bool isArrayTy() { return getTypeId() == ArrayTyID; }

    static Type* getFloatTy();
    static Type* getVoidTy();
    static Type* getFunctionTy(Type* _retType, std::vector<Type*> _argType, bool isVarArg);
    static Type* getLabelTy();
    static Type* getIntegerTy(int bit);
    static Type* getInt1Ty();
    static Type* getInt32Ty();
    static Type* getPointerTy(Type* eleType);
    static Type* getArrayTy(Type* eleType);

    static Type* getInt8PtrTy();
    static Type* getInt32PtrTy();
    static Type* getFloatPtrTy();
};

//  IntegerType
class IntegerType : public Type{
private:
    int bit;

public:
    explicit IntegerType(int bit): Type(IntegerTyID), bit(bit){}
    std::string to_string(){
        return "i" + std::to_string(bit);
    }

};

//  LabelType
class LabelType : public Type{
public:
    static LabelType* getInstance() {
        return &instance;
    }
private:
    LabelType() : Type(LabelTyID) {}

    static LabelType instance;
};

}


#endif //EUDEMONIA_TYPE_H

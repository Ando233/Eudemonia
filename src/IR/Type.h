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

    TypeID get_type_id() { return ID; }

public:
    bool is_float_type() { return get_type_id() == FloatTyID; }
    bool is_void_type() { return get_type_id() == VoidTyID; }
    bool is_label_type() { return get_type_id() == LabelTyID; }
    bool is_integer_type() { return get_type_id() == IntegerTyID; }
    bool is_function_type() { return get_type_id() == FunctionTyID; }
    bool is_pointer_type() { return get_type_id() == PointerTyID; }
    bool is_vector_type() { return get_type_id() == FixedVectorTyID || get_type_id() == ScalableVectorTyID; }
    bool is_array_type() { return get_type_id() == ArrayTyID; }
};

//  IntegerType
class IntegerType : public Type{
private:
    int bit;

public:
    explicit IntegerType(int bit): Type(IntegerTyID), bit(bit){}
    static IntegerType* getI1Instance(){
        static IntegerType i1Instance(1);
        return &i1Instance;
    }

    static IntegerType* getI32Instance(){
        static IntegerType i32Instance(32);
        return &i32Instance;
    }

    std::string to_string() const{
        return "i" + std::to_string(bit);
    }
};

//  FloatType
class FloatType : public Type{
public:
    static FloatType* getInstance(){
        static FloatType instance;
        return &instance;
    }
private:
    FloatType() : Type(FloatTyID) {}
};

class PointerType : public Type{
public:
    static PointerType* getI32PtrInstance(){
        static PointerType i32_ptr_instance(IntegerType::getI32Instance());
        return &i32_ptr_instance;
    }
    static PointerType* getF32PtrInstance(){
        static PointerType f32_ptr_instance(FloatType::getInstance());
        return &f32_ptr_instance;
    }
private:
    Type* eleType;
    explicit PointerType(Type* eleType) : Type(PointerTyID), eleType(eleType) {}

};

//  VoidType
class VoidType : public Type{
public:
    static VoidType* getInstance(){
        static VoidType instance;
        return &instance;
    }
private:
    VoidType() : Type(VoidTyID) {}
};

//  LabelType
class LabelType : public Type{
public:
    static LabelType* getInstance() {
        static LabelType instance;
        return &instance;
    }
private:
    LabelType() : Type(LabelTyID) {}
};



}


#endif //EUDEMONIA_TYPE_H

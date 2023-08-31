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

    virtual std::string to_string() {
        return "";
    }
};

//  IntegerType
class IntegerType : public Type{
public:
    explicit IntegerType(): Type(IntegerTyID){}

    static IntegerType* get_instance(){
        static IntegerType instance;
        return &instance;
    }

    std::string to_string() override {
        return "int";
    }
};

//  FloatType
class FloatType : public Type{
public:
    static FloatType* get_instance(){
        static FloatType instance;
        return &instance;
    }
    std::string to_string() override {
        return "float";
    }

private:
    FloatType() : Type(FloatTyID) {}
};

class PointerType : public Type{
public:
    explicit PointerType(Type* eleType) : Type(PointerTyID), eleType(eleType) {}
    static PointerType* get_i32_ptr_instance(){
        static PointerType int_ptr_instance(IntegerType::get_instance());
        return &int_ptr_instance;
    }
    static PointerType* get_f32_ptr_instance(){
        static PointerType float_ptr_instance(FloatType::get_instance());
        return &float_ptr_instance;
    }
    Type* get_ele_type(){
        return eleType;
    }
    std::string to_string() override {
        return get_ele_type()->to_string() + "*";
    }

private:
    Type* eleType;
};

class ArrayType : public Type{
private:
    int num;
    Type* ele_type;

public:
    ArrayType(int _num, Type* _ele_type) : Type(ArrayTyID){
        num = _num;
        ele_type = _ele_type;
    }

    int get_dim(){
        if(ele_type->is_array_type()){
            return dynamic_cast<ArrayType*>(ele_type)->get_dim() + 1;
        }
        else return 1;
    }

    Type* get_ele_type(){
        return ele_type;
    }

    std::string to_string() override {
        return "[" + std::to_string(num) + " x " + ele_type->to_string() + "]";
    }

};

//  VoidType
class VoidType : public Type{
public:
    static VoidType* get_instance(){
        static VoidType instance;
        return &instance;
    }
    std::string to_string() override {
        return "void";
    }

private:
    VoidType() : Type(VoidTyID) {}
};

//  LabelType
class LabelType : public Type{
public:
    static LabelType* get_instance() {
        static LabelType instance;
        return &instance;
    }

    std::string to_string() override {
        return "label";
    }
private:
    LabelType() : Type(LabelTyID) {}
};



}


#endif //EUDEMONIA_TYPE_H

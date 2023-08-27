//
// Created by Ando on 2023-08-26.
//

#ifndef EUDEMONIA_USE_H
#define EUDEMONIA_USE_H

namespace IR{
class Value;
class Instruction;

class Use{
private:
    Value* value;
    Instruction* user;
    int operand_pos;
public:
    Use(Value* _value, Instruction* _user, int _operandPos) : value(_value), user(_user), operand_pos(_operandPos) {}
    Value* get_value(){
        return value;
    };
    Instruction* get_user(){
        return user;
    };
    void set_value(Value* _value){
        value = _value;
    };
    void set_user(Instruction* _user){
        user = _user;
    };
    int get_operand_pos() {
        return operand_pos;
    }
    void set_operand_pos(int x) {
        operand_pos = x;
    }
};

}


#endif //EUDEMONIA_USE_H

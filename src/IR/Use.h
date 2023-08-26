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
    Use(Value* _value = nullptr, Instruction* _user = nullptr, unsigned _operandPos = 0);
    Use(const Use& use);
    Value* getValue();
    Instruction* getUser();
    void setValue(Value* _value );
    void setUser(Instruction* _user);
    unsigned getPos() { return operand_pos; }
    void reSetPos(unsigned x) { operand_pos = x; }
};

}


#endif //EUDEMONIA_USE_H

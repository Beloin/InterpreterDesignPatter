//
// Created by beloin on 21/05/2022.
//

#ifndef INTERPRETER_MANAGER_H
#define INTERPRETER_MANAGER_H


#include <expression/VoidExpression.h>

class Manager {
private:
    VoidExpression *expression = new VoidExpression();

public:
    void interpret(string code);
};


#endif //INTERPRETER_MANAGER_H

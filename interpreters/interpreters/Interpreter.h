//
// Created by beloin on 21/05/2022.
//

#ifndef INTERPRETER_INTERPRETER_H
#define INTERPRETER_INTERPRETER_H

#include "string"
using namespace std;


class Interpreter {

private:
    Interpreter *successor;

public:
    void interpret(string key, Context *ctx);
    void setSuccessor(Interpreter *);

};


#endif //INTERPRETER_INTERPRETER_H

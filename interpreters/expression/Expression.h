//
// Created by beloin on 21/05/2022.
//

#ifndef INTERPRETER_EXPRESSION_H
#define INTERPRETER_EXPRESSION_H

#include "string"
using namespace std;


class Expression {

protected:
    Expression *successor;

public:
    virtual void interpret(string key, Context *ctx) = 0;

    Expression *getSuccessor() const {
        return successor;
    }

    void setSuccessor(Expression *successor) {
        Expression::successor = successor;
    }
};


#endif //INTERPRETER_EXPRESSION_H

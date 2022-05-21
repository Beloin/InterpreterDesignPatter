//
// Created by beloin on 21/05/2022.
//

#ifndef INTERPRETER_VOIDEXPRESSION_H
#define INTERPRETER_VOIDEXPRESSION_H


#include <Context.h>
#include "Expression.h"

class VoidExpression : public Expression {
public:
    void interpret(string key, Context *ctx) override;
};


#endif //INTERPRETER_VOIDEXPRESSION_H

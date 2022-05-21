//
// Created by beloin on 21/05/2022.
//

#ifndef INTERPRETER_IDENTIFIEREXPRESSION_H
#define INTERPRETER_IDENTIFIEREXPRESSION_H


#include <Context.h>
#include "Expression.h"

class IdentifierExpression : public Expression{
public:
    void interpret(string key, Context *ctx) override;
};


#endif //INTERPRETER_IDENTIFIEREXPRESSION_H

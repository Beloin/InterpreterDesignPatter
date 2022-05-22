//
// Created by beloin on 21/05/2022.
//

#ifndef INTERPRETER_VALUEEXPRESSION_H
#define INTERPRETER_VALUEEXPRESSION_H


#include <Context.h>
#include "Expression.h"

class ValueExpression : public Expression{
public:
    void interpret(string key, Context **ctx) override;
};


#endif //INTERPRETER_VALUEEXPRESSION_H

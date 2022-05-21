//
// Created by beloin on 21/05/2022.
//

#ifndef INTERPRETER_ACTIONEXPRESSION_H
#define INTERPRETER_ACTIONEXPRESSION_H

#include <Context.h>
#include "string"
#include "Expression.h"

using namespace std;


extern const string EXPRESSIONS[];
extern const string TYPES[];
extern const int EXPRESSION_ARRAY_SIZE;
extern const int TYPE_ARRAY_SIZE;

class ActionExpression : Expression {
public:
    /**
     * Interpret single word command.
     *
     * Context will be assigned a new value if an Expression is sent via Key
     * @param key
     * @param ctx
     */
    void interpret(string key, Context *ctx) override;
private:
    bool isType(string key);
    bool isExpression(string key);
    void setupExpression(string key, Context *ctx);
};


#endif //INTERPRETER_ACTIONEXPRESSION_H

//
// Created by beloin on 21/05/2022.
//

#include <NewInstanceContext.h>
#include <AddContext.h>
#include <MinusContext.h>
#include <ConcatContext.h>
#include <DeleteContext.h>
#include "ActionExpression.h"

const string EXPRESSIONS[] = {"ADD", "MINUS", "CONCAT", "DELETE"};
const string TYPES[] = {"STRING", "INTEGER", "VAR"};
const int EXPRESSION_ARRAY_SIZE = 4;
const int TYPE_ARRAY_SIZE = 2;

void ActionExpression::interpret(string key, Context *ctx) {
    if (isType(key)) {
        *ctx = *(Context *) new NewInstanceContext();
        ctx->setType(key);
        return;
    }

    if (isExpression(key)) {
        setupExpression(key, ctx);
        return;
    }

    this->successor->interpret(key, ctx);
}

// TODO: DONT IGNORE TYPES
bool ActionExpression::isType(string key) {
    for (int i = 0; i < TYPE_ARRAY_SIZE; ++i) if (key == TYPES[i]) return true;
    return false;
}

bool ActionExpression::isExpression(string key) {
    for (const auto & i : EXPRESSIONS) {
        if (key == i) return true;
    }
    return false;
}

void ActionExpression::setupExpression(string key, Context *ctx) {
    if (key == "ADD") {
        *ctx = *(Context *) new AddContext();
    }
    if (key == "MINUS") {
        *ctx = *(Context *) new MinusContext();
    }
    if (key == "CONCAT") {
        *ctx = *(Context *) new ConcatContext();
    }
    if (key == "DELETE") {
        *ctx = *(Context *) new DeleteContext();
    }
    ctx->setAction(key);
}

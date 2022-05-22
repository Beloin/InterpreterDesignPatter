//
// Created by beloin on 21/05/2022.
//

#include "VoidExpression.h"

void VoidExpression::interpret(string key, Context **ctx) {
    this->successor->interpret(key, ctx);
}

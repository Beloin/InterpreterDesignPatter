//
// Created by beloin on 21/05/2022.
//

#include "IdentifierExpression.h"
#include "../../utils/ExpressionUtils.h"

void IdentifierExpression::interpret(string key, Context **ctx) {
    bool isId = isIdentifier(key);
    // Check for number or "words"
    if (isId) {
        if (!(*ctx)->getIdentifier().empty()) (*ctx)->setValue(key);
        else (*ctx)->setIdentifier(key);
        return;
    }

    this->successor->interpret(key, ctx);
}

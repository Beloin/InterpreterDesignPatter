//
// Created by beloin on 21/05/2022.
//

#include "ValueExpression.h"
#include "../../utils/ExpressionUtils.h"
#include "../../utils/utils.h"

void ValueExpression::interpret(string key, Context *ctx) {
    if (isValue(key)) {
        ctx->setValue(getStringValue(key));
        return;
    }

    this->successor->interpret(key, ctx);
}


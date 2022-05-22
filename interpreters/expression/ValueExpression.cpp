//
// Created by beloin on 21/05/2022.
//

#include <VariableStore/Variable.h>
#include "ValueExpression.h"
#include "../../utils/ExpressionUtils.h"
#include "../../utils/utils.h"

void ValueExpression::interpret(string key, Context **ctx) {
    if (isValue(key)) {
        string toSet;
        if (isQuotedString(key)) {
            toSet = getStringValue(key);
        } else {
            toSet = key;
        }

        (*ctx)->setValue(toSet);
        return;
    }

    this->successor->interpret(key, ctx);
}


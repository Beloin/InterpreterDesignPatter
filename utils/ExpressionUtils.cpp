//
// Created by beloin on 21/05/2022.
//

#include <expression/ActionExpression.h>
#include "ExpressionUtils.h"
#include "utils.h"

bool isType(const string& key) {
    for (int i = 0; i < TYPE_ARRAY_SIZE; ++i) {
        if (key == TYPES[i]) return true;
    }
    return false;
}

bool isExpression(const string& key) {
    for (int i = 0; i < EXPRESSION_ARRAY_SIZE; ++i) {
        if (key == EXPRESSIONS[i]) return true;
    }
    return false;
}

// isIdentifier = !isExpression && !isType && !isNumber && !isQuoted;
bool isIdentifier(const string &key) {
    return !(isExpression(key) || isType(key) || isQuotedString(key) || isNumberString(key));
}

// isValue = isQuoted || isNumber
bool isValue(const string &key) {
    return isQuotedString(key) || isNumberString(key);
}

//
// Created by beloin on 21/05/2022.
//

#include <VariableStore/VariableStore.h>
#include "AddContext.h"

void AddContext::compile() {
    auto varStore = VariableStore::getInstance();

    auto value = varStore->getVariableValue(this->identifier);

    int integerValue;
    if (varStore->exists(this->value)) {
        integerValue = stoi(varStore->getVariableValue(this->value)) + stoi(value);
    } else {
        integerValue = stoi(value) + stoi(this->value);
    }

    varStore->setVariableValue(this->identifier, to_string(integerValue));
}

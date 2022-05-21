//
// Created by beloin on 21/05/2022.
//

#include <VariableStore/VariableStore.h>
#include "MinusContext.h"

void MinusContext::compile() {
    auto varStore = VariableStore::getInstance();

    auto varValue = varStore->getVariableValue(this->identifier);
    auto integerValue = stoi(varValue) - stoi(this->value);

    varStore->setVariableValue(this->identifier, to_string(integerValue));
}

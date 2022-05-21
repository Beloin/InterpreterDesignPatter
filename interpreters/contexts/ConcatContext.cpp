//
// Created by beloin on 21/05/2022.
//

#include "ConcatContext.h"
#include "VariableStore/VariableStore.h"

void ConcatContext::compile() {
    auto varStore = VariableStore::getInstance();
    auto toBeConcated = varStore->getVariableValue(this->identifier);
    toBeConcated = toBeConcated + this->value;
    varStore->setVariableValue(this->identifier, toBeConcated);
}

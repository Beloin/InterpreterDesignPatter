//
// Created by beloin on 21/05/2022.
//

#include "NewInstanceContext.h"
#include "VariableStore/VariableStore.h"

void NewInstanceContext::compile() {
    auto varStore = VariableStore::getInstance();
    varStore->setVariableValue(this->identifier, this->value);
}
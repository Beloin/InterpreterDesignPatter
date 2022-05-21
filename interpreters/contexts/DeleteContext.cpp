//
// Created by beloin on 21/05/2022.
//

#include <VariableStore/VariableStore.h>
#include "DeleteContext.h"

void DeleteContext::compile() {
    VariableStore::getInstance()->removeVariable(this->identifier);
}

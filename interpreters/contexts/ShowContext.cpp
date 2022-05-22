//
// Created by beloin on 21/05/2022.
//

#include "ShowContext.h"
#include "iostream"
#include "../VariableStore/VariableStore.h"
using namespace std;

void ShowContext::compile() {
    auto instance = VariableStore::getInstance();

    bool showValue = !this->value.empty();
    bool showIdentifier = !this->identifier.empty();

    if (showValue) {
        cout << this->value;
    } else if (showIdentifier) {
        auto value = instance->getVariableValue(this->identifier);
        cout << value;
    }

    cout << endl;
}
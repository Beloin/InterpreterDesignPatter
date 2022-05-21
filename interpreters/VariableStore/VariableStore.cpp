//
// Created by beloin on 21/05/2022.
//

#include "VariableStore.h"

VariableStore *VariableStore::getInstance() {
    if (VariableStore::_instance == nullptr) {
        _instance = new VariableStore(200);
    }

    return _instance;
}

string VariableStore::getVariableValue(const string& key) {
    for (int i = 0; i < variableArraySize; ++i) {
        auto currentVariable = this->store[i];
        if (currentVariable->name == key) {
            return currentVariable->value;
        }
    }

    throw "Undefined Identifier";
}

void VariableStore::removeVariable(const string& key) {
    for (int i = 0; i < variableArraySize; ++i) {
        auto currentVariable = this->store[i];
        if (currentVariable->name == key) {
            currentVariable->value = nullptr;
        }
    }
}

void VariableStore::setVariableValue(const string& key, const string& value) {
    this->store[variableArraySize] = new Variable(key, value);
    variableArraySize++;
}

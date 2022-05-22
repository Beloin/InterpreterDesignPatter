//
// Created by beloin on 21/05/2022.
//

#include "VariableStore.h"
#include "../../utils/DefaultException.h"

VariableStore *VariableStore::_instance = nullptr;
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

    throw (DefaultException("Undefined Reference"));
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
    if (exists(key)) {
        auto var = this->getVariable(key);
        var->value = value;
    } else {
        this->store[variableArraySize] = new Variable(key, value);
        variableArraySize++;
    }
}

Variable * VariableStore::getVariable(const string &key) {
    for (int i = 0; i < variableArraySize; ++i) {
        auto currentVariable = this->store[i];
        if (currentVariable->name == key) {
            return currentVariable;
        }
    }

    throw (DefaultException("Undefined Reference"));
}

bool VariableStore::exists(const string &key) {
    for (int i = 0; i < variableArraySize; ++i) {
        auto currentVariable = this->store[i];
        if (currentVariable->name == key) {
            return true;
        }
    }

    return false;
}

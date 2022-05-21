//
// Created by beloin on 21/05/2022.
//

#ifndef INTERPRETER_VARIABLESTORE_H
#define INTERPRETER_VARIABLESTORE_H

#include "Variable.h"

class VariableStore {
private:
    Variable **store;
    long variableArraySize = 0;

    explicit VariableStore(long MAX_SIZE) {
        this->store = (Variable **) new Variable[MAX_SIZE];
    }
    static VariableStore *_instance;

public:
    static VariableStore * getInstance();

    string getVariableValue(const string& key);
    void removeVariable(const string& key);
    void setVariableValue(const string& key, const string& value);
};


#endif //INTERPRETER_VARIABLESTORE_H

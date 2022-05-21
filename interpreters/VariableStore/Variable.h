//
// Created by beloin on 21/05/2022.
//

#ifndef INTERPRETER_VARIABLE_H
#define INTERPRETER_VARIABLE_H

#include "string"
using namespace std;

enum VarType {
    STRING,
    INTEGER
};

class Variable {
public:
    string name;
    VarType type;
    string value;

    Variable(const string &name, const string &value);
    Variable(const string &name, VarType type, const string &value);
    Variable();
};


#endif //INTERPRETER_VARIABLE_H

//
// Created by beloin on 21/05/2022.
//

#include "Variable.h"

Variable::Variable(const string &name, VarType type, const string &value) : name(name), type(type), value(value) {}

Variable::Variable(const string &name, const string &value) : name(name), value(value) {}

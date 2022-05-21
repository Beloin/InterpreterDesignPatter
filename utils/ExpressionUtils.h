//
// Created by beloin on 21/05/2022.
//

#ifndef INTERPRETER_EXPRESSIONUTILS_H
#define INTERPRETER_EXPRESSIONUTILS_H
#include "string"
using namespace std;

bool isType(const string& key);
bool isExpression(const string& key);

bool isIdentifier(const string& key);
bool isValue(const string& key);

#endif //INTERPRETER_EXPRESSIONUTILS_H

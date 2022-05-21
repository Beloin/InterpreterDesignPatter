//
// Created by beloin on 21/05/2022.
//

#ifndef INTERPRETER_UTILS_H
#define INTERPRETER_UTILS_H
#include "string"
using namespace std;

bool isQuotedString(const string& str);
string getStringValue(const string& str);

bool isNumberString(const string& str);

#endif //INTERPRETER_UTILS_H

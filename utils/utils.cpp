//
// Created by beloin on 21/05/2022.
//

#include "utils.h"

bool isQuotedString(const string& str) {
    auto stringLength = str.length();
    bool hasQuote = str[0] == '"' || str[stringLength-1] == '"';
    return hasQuote;
}

string getStringValue(const string &str) {
    auto stringLength = str.length();
    string newString;

    // Get String value without quotes
    for (int i = 1; i < stringLength-1; ++i) {
        newString[i] = str[i];
    }

    return newString;
}

bool isNumberString(const string &str) {
    return isdigit(str[0]);
}

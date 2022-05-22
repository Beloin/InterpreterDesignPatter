//
// Created by beloin on 21/05/2022.
//

#include <vector>
#include <NoopContext.h>
#include <expression/ActionExpression.h>
#include <expression/IdentifierExpression.h>
#include <expression/ValueExpression.h>
#include "Manager.h"

vector<string> splitString(string str) {
    vector<string> strings = {};
    int *spacesLocation = new int[str.length()];
    spacesLocation[0] = -1;
    int spacesSize = 1;

    for (int i = 0; i < str.length(); ++i) {
        if (str[i] == ' ') {
            spacesLocation[spacesSize] = i;
            spacesSize++;
        }
    }
    spacesLocation[spacesSize] = str.length();
    spacesSize++;

    int stringsSize = 0;
    for (int i = 1; i < spacesSize; ++i) {
        string currentStr;
        for (int k = spacesLocation[i - 1] + 1; k < spacesLocation[i]; ++k) {
            currentStr.push_back(str[k]);
        }

        strings.push_back(currentStr);;
        stringsSize++;
    }

    return strings;
}


void Manager::interpret(string code) {
    auto splitedString = splitString(code);
    auto *defaultContext = (Context *) new NoopContext();

    for (int i = 0; i < splitedString.size(); ++i) {
        string key = splitedString.at(i);
        this->expression->interpret(key, &defaultContext);
    }

    defaultContext->compile();
}

Manager::Manager() {
    auto actionExpression = new ActionExpression();
    auto identifierExpression = new IdentifierExpression();
    auto valueExpression = new ValueExpression();

    this->expression->setSuccessor((Expression*) actionExpression);
    actionExpression->setSuccessor((Expression*) identifierExpression);
    identifierExpression->setSuccessor((Expression*) valueExpression);
}


//
// Created by beloin on 21/05/2022.
//

#ifndef INTERPRETER_CONTEXT_H
#define INTERPRETER_CONTEXT_H

#include "string"
using namespace std;

class Context {
public:
    virtual void compile() = 0;

protected:
    string type;
    string identifier;
    string action;
    // First lets start with simple Value
    string value;
public:
    const string &getType() const {
        return type;
    }

    void setType(const string &type) {
        Context::type = type;
    }

    const string &getIdentifier() const {
        return identifier;
    }

    void setIdentifier(const string &identifier) {
        Context::identifier = identifier;
    }

    const string &getAction() const {
        return action;
    }

    void setAction(const string &action) {
        Context::action = action;
    }

    const string &getValue() const {
        return value;
    }

    void setValue(const string &value) {
        Context::value = value;
    }

};


#endif //INTERPRETER_CONTEXT_H

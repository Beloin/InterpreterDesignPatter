//
// Created by beloin on 21/05/2022.
//

#ifndef INTERPRETER_DEFAULTEXCEPTION_H
#define INTERPRETER_DEFAULTEXCEPTION_H
#include <exception>
#include "string"

class DefaultException : public std::exception{
private:
    std::string message;
public:
    DefaultException(std::string message);

    const std::string &getMessage() const;

};


#endif //INTERPRETER_DEFAULTEXCEPTION_H

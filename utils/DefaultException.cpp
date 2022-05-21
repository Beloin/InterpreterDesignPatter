//
// Created by beloin on 21/05/2022.
//

#include "DefaultException.h"
#include <utility>

DefaultException::DefaultException(std::string message) : message(std::move(message)) {}

const std::string &DefaultException::getMessage() const {
    return message;
}

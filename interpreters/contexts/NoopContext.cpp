//
// Created by beloin on 21/05/2022.
//

#include "NoopContext.h"
#include "../../utils/DefaultException.h"

void NoopContext::compile() {
    throw(DefaultException("Syntax Error"));
}
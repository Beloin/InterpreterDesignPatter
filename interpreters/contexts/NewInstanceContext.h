//
// Created by beloin on 21/05/2022.
//

#ifndef INTERPRETER_NEWINSTANCECONTEXT_H
#define INTERPRETER_NEWINSTANCECONTEXT_H

#include "Context.h"

class NewInstanceContext : Context {
public:
    void compile() override;
};


#endif //INTERPRETER_NEWINSTANCECONTEXT_H

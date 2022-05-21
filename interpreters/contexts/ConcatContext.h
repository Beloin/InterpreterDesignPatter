//
// Created by beloin on 21/05/2022.
//

#ifndef INTERPRETER_CONCATCONTEXT_H
#define INTERPRETER_CONCATCONTEXT_H

#include "Context.h"

class ConcatContext : Context{
public:
    void compile() override;
};


#endif //INTERPRETER_CONCATCONTEXT_H

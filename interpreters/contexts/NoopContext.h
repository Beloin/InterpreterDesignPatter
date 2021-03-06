//
// Created by beloin on 21/05/2022.
//

#ifndef INTERPRETER_NOOPCONTEXT_H
#define INTERPRETER_NOOPCONTEXT_H

#include "Context.h"

/**
 * Use this context as placeholder to others contexts
 */
class NoopContext : Context  {
public:
    void compile() override;
};

#endif //INTERPRETER_NOOPCONTEXT_H

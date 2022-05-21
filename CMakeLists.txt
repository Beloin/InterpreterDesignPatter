cmake_minimum_required(VERSION 3.10)
project(interpreter)

set(CMAKE_CXX_STANDARD 14)

include_directories(interpreters)
include_directories(interpreters/contexts)

add_executable(interpreter

        interpreters/contexts/Context.h
        interpreters/contexts/ConcatContext.h
        interpreters/contexts/ConcatContext.cpp

        interpreters/contexts/NewInstanceContext.cpp
        interpreters/contexts/NewInstanceContext.h

        interpreters/contexts/NoopContext.cpp
        interpreters/contexts/NoopContext.h

        interpreters/contexts/ShowAction.cpp
        interpreters/contexts/ShowAction.h

        interpreters/VariableStore/Variable.h
        interpreters/VariableStore/Variable.cpp

        interpreters/VariableStore/VariableStore.h
        interpreters/VariableStore/VariableStore.cpp



        main.cpp interpreters/contexts/AddContext.cpp interpreters/contexts/AddContext.h interpreters/contexts/DeleteContext.cpp interpreters/contexts/DeleteContext.h interpreters/contexts/MinusContext.cpp interpreters/contexts/MinusContext.h interpreters/expression/Expression.h interpreters/expression/VoidExpression.cpp interpreters/expression/VoidExpression.h interpreters/expression/ActionExpression.cpp interpreters/expression/ActionExpression.h interpreters/expression/IdentifierExpression.cpp interpreters/expression/IdentifierExpression.h utils/utils.cpp utils/utils.h utils/ExpressionUtils.cpp utils/ExpressionUtils.h interpreters/expression/ValueExpression.cpp interpreters/expression/ValueExpression.h interpreters/Manager.cpp interpreters/Manager.h utils/DefaultException.cpp utils/DefaultException.h)

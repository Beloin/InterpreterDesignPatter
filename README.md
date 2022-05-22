# Expression Pattern

Precisamos de uma gramática

## Operações

TIPO IDENTIFICADOR VALOR   
AÇÃO IDENTIFICADOR VALOR*

Ex:

STRING VAR ABLALUE
INTEGER VAR2 12

CONCAT VAR LUL
ADD VAR2 5

SHOW VAR2

## Ações:  
SHOW: mostra o valor  
DELETAR: deleta o valor e a chave  
ADICIONAR (int, double)  
RETIRAR (int, double)  
CONCATENAR (string)  
TYPE: Identifica o tipo do identificador  

## Valores de Identificadores e Argumentos (Tipos) :  
STRING  
INTEIRO  
DOUBLE  

As chaves são palavras separadas por espaço (" "). Utilizaremos de 
Chain of Responsability para Identificar as operações a serem efetuadas:

Interface interpretadora:
 - interpret(String key, Context context)
 - suscessor.interpret(String key, Context context)

Context:
 - Type
 - Identifier
 - Action

VariableInterpreter:
 - variaveis: Variable[]

Variable:
 - name: string,
 - type: string,
 - value: string; (Sempre savaremos em String, mas será modificada caso seja inteira)


Podemos criar uma árvore sintática e construi as expressões a partir dela?

New Variable: 
ActionInterpreter -> IdentifierInterpreter -> ValueInterpreter

## Manager:

Has all interpreters, manage the Key String and the Context pointer 
(Could be a Wrapper in context, but we are using C++).

InterpreterManager:
 - private interpreters: Expression*
 - interpret(String code)

## VariableStore

VariableStore:
 - getInstance()
 - private: variables;
 - getVar(String var)
 - setVar(String var, any value)
 
## Interpreters:

Expression:
 - interpret(String key, Context ctx) 
 - next(String key, Context ctx)
 - setSuccessor(Expression *)

VoidInterpreter : Expression:
 - Only pass to other interpreter

ActionExpression : Expression:
 - Create and setup Context

IdentifierExpression : Expression:
 - Adds identifier to Context

ValueExpression : Expression:
 - Works like Sequence Expression with a list of values
 - Adds values to Context

O contexto será construído a partir da "caminhada" nessa árvore:

## Contexts:

Context:
 - compile() / interpret()
 - Type: string
 - Identifier: string
 - Values: string[]
 - Action: string

// ACTION: NOOP  
DefaultContext : Context:
- compile() Raises an error, since the syntax is wrong

// ACTION: SHOW  
ShowContext : Context:
 - complee() cout variable;

// ACTION: NEWINSTANCE  
NewInstanceContext : Context:
 - compile()

// ACTION: CONCAT  
ConcatContext : Context:
 - compile()

// ACTION: ADD  
AddContext : Context:
 - compile()

// ACTION: DELETE  
DeleteContext : Context:
 - compile()

// ACTION: MINUS  
MinusContext : Context:
 - compile()

## Main:
Loop infinito esperando a expressão "EXIT".
grammar SysY;

import CommonLex;

compUnit : (decl | funcDef)* EOF;

decl : 'const'? bType def (',' def)* ';';

def: Ident ('[' exp ']')* ('=' (initVal | initArray))? ;

initVal: exp;

initArray: '{' (initVal (',' initVal)* )? '}' ;

exp:  unaryExp (op unaryExp)* ;

unaryExp: unaryOP* primaryExp ;

primaryExp: '(' exp ')' | lVal | number | call;

call: Ident '(' (exp (',' exp)* )? ')' ;

number: IntConst | FloatConst;

lVal: Ident ('[' exp ']')* ;

funcDef: funcType Ident '(' (funcFParam (',' funcFParam)* )? ')' block;

funcFParam: bType Ident ('[' ']' ('[' exp ']')*) ;

block: '{' (decl | stmt)* '}';

stmt: assign | expStmt | block | ifStmt | whileStmt | break | continue | return;

assign: lVal '=' exp ';' ;

expStmt: exp? ';' ;

ifStmt: If '(' exp ')' stmt (Else stmt)? ;

whileStmt: While '(' exp ')' stmt ;

break: Break ';' ;

continue: Continue ';' ;

return: Return exp? ';' ;

unaryOP: Add | Sub | Not ;

op: Add | Sub | Not | Mul | Div | Mod | LAnd | LOr | Eq | Ne | Lt | Le | Gt | Ge ;

bType: Int | Float;

funcType: Int | Float | Void;
grammar SysY;

import CommonLex;

compUnit : (globalDecl | funcDef)* EOF;

globalDecl: decl;

decl : 'const'? bType def (',' def)* ';';

def: Ident ('[' exp ']')* ('=' (initVal | initArray))? ;

initVal: exp;

initArray: '{' (initVal (',' initVal)* )? '}' ;

mulExp: unaryExp (mulOP unaryExp)*;

exp:  mulExp (addOP mulExp)*;

lorExp: landExp ('||' landExp)* ;

landExp: eqExp ('&&' eqExp)* ;

eqExp: relExp (eqOP relExp)* ;

relExp: exp(relOP exp)* ;

unaryExp: unaryOP* primaryExp ;

primaryExp: '(' exp ')' | lVal | number | call;

call: Ident '(' (exp (',' exp)* )? ')' ;

number: IntConst | FloatConst;

lVal: Ident ('[' exp ']')* ;

funcDef: funcType Ident '(' (funcFParam (',' funcFParam)* )? ')' block;

funcFParam: bType Ident ('[' ']' ('[' exp ']')*)? ;

block: '{' blockItem* '}';

blockItem: decl | stmt;

stmt: assign | expStmt | block | ifStmt | whileStmt | break | continue | return;

assign: lVal '=' exp ';' ;

expStmt: exp? ';' ;

ifStmt: If '(' lorExp ')' stmt (Else stmt)? ;

whileStmt: While '(' lorExp ')' stmt ;

break: Break ';' ;

continue: Continue ';' ;

return: Return exp? ';' ;

unaryOP: Add | Sub | Not ;

addOP: Add | Sub;

mulOP: Mul | Div | Mod;

eqOP: Eq | Ne;

relOP: Lt | Gt | Le | Ge;

bType: Int | Float;

funcType: Int | Float | Void;
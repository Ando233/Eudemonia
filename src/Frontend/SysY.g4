grammar SysY;

import CommonLex;

compUnit : (decl | funcDef)* EOF;

decl : 'const'? bType def (',' def)* ';';

def: Ident ('[' exp ']')* ('=' (initVal | initArray))? ;

initVal: exp;

initArray: '{' (initVal (',' initVal)* )? '}' ;

mulExp: unaryExp (mulOP unaryExp)*;

exp:  mulExp (addOP mulExp)*;

lorExp: landExp ('||' landExp)* ;

landExp: eqExp ('&&' eqExp)* ;

eqExp: relExp (relOP relExp)* ;

relExp: mulExp(addOP mulExp)* ;

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

ifStmt: If '(' lorExp ')' stmt (Else stmt)? ;

whileStmt: While '(' lorExp ')' stmt ;

break: Break ';' ;

continue: Continue ';' ;

return: Return exp? ';' ;

unaryOP: Add | Sub | Not ;

addOP: Add | Sub;

mulOP: Mul | Div | Mod;

relOP: Lt | Gt | Le | Ge;

bType: Int | Float;

funcType: Int | Float | Void;
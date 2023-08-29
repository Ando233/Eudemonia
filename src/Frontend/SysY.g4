grammar SysY;

import CommonLex;

compUnit : (decl | funcDef)* EOF;

decl : 'const'? bType def (',' def)* ';';

def: Ident ('[' exp ']')* ('=' (initVal | initArray))? ;

initVal: exp;

initArray: '{' (initVal (',' initVal)* )? '}' ;

exp:  unaryExp
        | exp (Mul | Div | Mod) exp
        | exp (Add | Sub) exp
        ;

lexp: exp | lexp (Lt | Gt | Le | Ge) lexp
            | lexp (Eq | Ne) lexp
         	| lexp LAnd lexp
         	| lexp LOr lexp
         	;

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

ifStmt: If '(' lexp ')' stmt (Else stmt)? ;

whileStmt: While '(' lexp ')' stmt ;

break: Break ';' ;

continue: Continue ';' ;

return: Return exp? ';' ;

unaryOP: Add | Sub | Not ;

op: Add | Sub | Not | Mul | Div | Mod | LAnd | LOr | Eq | Ne | Lt | Le | Gt | Ge ;

bType: Int | Float;

funcType: Int | Float | Void;
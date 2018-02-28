%{
void yyerror (char *s);
#include <stdio.h>
#include <stdlib.h>
#include <cstdio>
#include <cstdlib>
#include "regAll.hpp"
#include "node.hpp"

Block *programBlock;

extern int yylex();
extern int yyparse();
void yyerror(const char *s) { printf("Error: %s\n", s);  }
%}


%union
{
    Block *block;
    Statement *statement;
}

%type <block> statements
%type <statement> statement
%token LOAD_IST ADD_IST SUB_IST OR_IST XOR_IST BRA_IST BRAZ_IST BRAL_IST BRALZ_IST CALL_IST HALT_IST IN_IST OUT_IST
%token REG_PC s_execute s_nostore
%token <reg> REG

%start program

%%
program: statements { programBlock = $1; }
       ;

statements: statement { $$ = new Block(); $$->statementList.push_back($<statement>1); }
          | statements statement { $$->statementList.push_back($<statement>2); }
          ;
statement:  LOAD_IST  REG                    { $$ =  f_Load($$); }
          | ADD_IST   REG REG                { $$ =  f_Add($$, $$); }
          | SUB_IST   REG REG                { $$ =  f_Sub($$, $$); }
          | OR_IST    REG REG                { $$ =  f_Or($$, $$); }
          | XOR_IST   REG REG                { $$ =  f_Xor($$, $$); }
          | BRA_IST   REG s_nostore          { $$ =  f_Bra($$, $$); }
          | BRAZ_IST  REG s_nostore          { $$ =  f_Braz($$, $$); }
          | BRAL_IST  REG s_nostore          { $$ =  f_Bral($$); }
          | BRALZ_IST REG s_nostore          { $$ =  f_Bralz($$, $$); }
          | CALL_IST  REG_PC REG             { $$ =  f_Call($$, $$); }
          | HALT_IST  s_execute              { $$ =  f_Halt($$); }
          | IN_IST                           { $$ =  f_In(); }
          | OUT_IST   REG                    { $$ =  f_Out($$); }
          ;
%%

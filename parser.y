%{
void yyerror (char *s);
#include <stdio.h>
#include <stdlib.h>
#include "regAll.h"
#include "node.h"


int symbols[52];
int symbolVal(char symbol);
void updateSymbolVal(char symbol, int val);
%}

%union
{
    Block *block;
    Statement *statement;
}

%token LOAD_IST ADD_IST SUB_IST OR_IST XOR_IST BRA_IST BRAZ_IST BRAL_IST BRALZ_IST CALL_IST HALT_IST IN_IST OUT_IST
%type <block> statements
%type <statement> statement
%start program

%%
program: statements { }
       ;

statements: statement statements
          ;

statement:  LOAD_IST    { $$ =  new F_Load($$); }
          | ADD_IST     { $$ =  new F_Add($2, $3); }
          | SUB_IST     { $$ =  new F_Sub($2, $3); }
          | OR_IST      { $$ =  new F_Or($2, $3); }
          | XOR_IST     { $$ =  new F_Xor($2, $3); }
          | BRA_IST     { $$ =  new F_Bra($2, $3); }
          | BRAZ_IST    { $$ =  new F_Braz($2, $3); }
          | BRAL_IST    { $$ =  new F_Bral($3); }
          | BRALZ_IST   { $$ =  new F_Bralz($2, $3); }
          | CALL_IST    { $$ =  new F_Call($$); }
          | HALT_IST    { $$ =  new F_Halt(); }
          | IN_IST      { $$ =  new F_In($$); }
          | OUT_IST     { $$ =  new F_Out($$); }
          ;
%%                    /* C code */


int main (void) { return yyparse ( ); }

void yyerror (char *s) {fprintf (stderr, "%s\n", s);}

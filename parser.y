%{
void yyerror (char *s);
#include <stdio.h>
#include <stdlib.h>
#include "regAll.h"
#include "nodeAST.h"


int symbols[52];
int symbolVal(char symbol);
void updateSymbolVal(char symbol, int val);
%}

%union {int num; char id;}

%token LOAD_IST ADD_IST SUB_IST OR_IST XOR_IST BRA_IST BRAZ_IST BRAL_IST BRALZ_IST CALL_IST HALT_IST IN_IST OUT_IST
%token print
%token exit_command
%token <num> number
%token <id> identifier
%type <num> line exp term
%type <id> assignment
%start program

%%
program: statements { }
       ;

statements: statement statements
          ;

statement:  LOAD_IST    { $$ =  f_Load(); }
          | ADD_IST     { $$ =  f_Add(); }
          | SUB_IST     { $$ =  f_Sub(); }
          | OR_IST      { $$ =  f_Or(); }
          | XOR_IST     { $$ =  f_Xor(); }
          | BRA_IST     { $$ =  f_Bra($2, $3); }
          | BRAZ_IST    { $$ =  f_Braz($2, $3); }
          | BRAL_IST    { $$ =  f_Bral($3); }
          | BRALZ_IST   { $$ =  f_Bralz($2, $3); }
          | CALL_IST    { $$ =  f_Call(); }
          | HALT_IST    { $$ =  f_Halt(); }
          | IN_IST      { $$ =  f_In(); }
          | OUT_IST     { $$ =  f_Out(); }
          ;
%%                    /* C code */


int main (void) { return yyparse ( ); }

void yyerror (char *s) {fprintf (stderr, "%s\n", s);}

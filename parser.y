%{
void yyerror (char *s);
#include <stdio.h>
#include <stdlib.h>
#include "regAll.h"


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
program: statements {  }
       ;

statements:
          ;

statement:  LOAD_IST    { $$ = new f_Load($$); }
          | ADD_IST     { $$ = new f_Add($2, $3); }
          | SUB_IST     { $$ = new f_Sub($2, $3); }
          | OR_IST      { $$ = new f_Or($2, $3); }
          | XOR_IST     { $$ = new f_Xor($2, $3); }
          | BRA_IST     { $$ = new f_Bra($2, $3); }
          | BRAZ_IST    { $$ = new f_Braz($2, $3); }
          | BRAL_IST    { $$ = new f_Bral($3); }
          | BRALZ_IST   { $$ = new f_Bralz($2, $3); }
          | CALL_IST    { $$ = new f_Call(); }
          | HALT_IST    { $$ = new f_Halt(); }
          | IN_IST      { $$ = new f_In(); }
          | OUT_IST     { $$ = new f_Out($1); }
          ;
%%                    /* C code */


int main (void) { return yyparse ( ); }

void yyerror (char *s) {fprintf (stderr, "%s\n", s);}

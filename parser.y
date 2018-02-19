%{
void yyerror (char *s);
#include <stdio.h>
#include <stdlib.h>
#include "instructions.h"


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

loop: '[' statements ']' { $$ = new Loop(*$2); }
    ;

statement: LOAD_IST		{ }
				| ADD_IST			{ }
				| SUB_IST			{ }
				| OR_IST			{ }
				| XOR_IST			{ }
				| BRA_IST			{ }
				| BRAZ_IST		{ }
				| BRAL_IST		{ }
				| BRALZ_IST		{ }
				| CALL_IST		{ }
				| HALT_IST		{ }
				| IN_IST			{ }
				| OUT_IST			{ }
				| loop				{ }
         ;
%%                    /* C code */

int computeSymbolIndex(char token)
{
	int idx = -1;
	if(islower(token)) {
		idx = token - 'a' + 26;
	} else if(isupper(token)) {
		idx = token - 'A';
	}
	return idx;
}

/* returns the value of a given symbol */
int symbolVal(char symbol)
{
	int bucket = computeSymbolIndex(symbol);
	return symbols[bucket];
}

/* updates the value of a given symbol */
void updateSymbolVal(char symbol, int val)
{
	int bucket = computeSymbolIndex(symbol);
	symbols[bucket] = val;
}

int main (void) {
	/* init symbol table */
	int i;
	for(i=0; i<52; i++) {
		symbols[i] = 0;
	}
	return yyparse ( );
}

void yyerror (char *s) {fprintf (stderr, "%s\n", s);}

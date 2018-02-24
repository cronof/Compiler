#include <stdio.h>
#include "regAll.h"
#include "parser.tab.h"
#include "node.h"
#include <iostream>
using namespace std;
extern int yyparse();
extern int yylineno;
extern char* yytext;

//char *instructions[] = {NULL, "LOAD", "ADD", "SUB", "OR", "XOR", "BRA","BRAZ", "BRAL", "BRALZ", "CALL", "HALT", "IN", "OUT"};


int main()
{
	int ntoken;
	ntoken = yyparse();
	while(ntoken) {
		cout<< ntoken << '\n';
		if(yyparse() == NULL) {
			cout<<"Empty !!!!!!!!!!"<<'\n';
			return 1;
		}
		return 0;
}

		/*
		vtoken = yyparse();
		switch (ntoken) {
			case LOAD_IST:

			case ADD_IST:

			case SUB_IST:

			case OR_IST:
			case XOR_IST:

			case BRA_IST:
			case BRAL_IST:
			case BRAZ_IST:
			case BRALZ_IST:

			case CALL_IST:
			case HALT_IST:

			case IN_IST:
			case OUT_IST:



case R2:
			case RA:
				if(vtoken != RB) {
					printf("Syntax error in line %d, Expected an identifier but found %s\n", yylineno, yytext);
					return 1;
				}
				printf("%s is set to %s\n", instructions[ntoken], yytext);
				break;
			case RB:
				if(vtoken != RD) {
					printf("Syntax error in line %d, Expected an integer but found %s\n", yylineno, yytext);
					return 1;
				}
				printf("%s is set to %s\n", names[ntoken], yytext);
				break;
		default:
			printf("Syntax error in line %d\n",yylineno);
		}
		ntoken = yyparse();
	}*/

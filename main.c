#include <stdio.h>
#include "regAll.h"
#include "parser.tab.h"
extern int yyparse();
extern int yylineno;
extern char* yytext;

//char *instructions[] = {NULL, "LOAD", "ADD", "SUB", "OR", "XOR", "BRA","BRAZ", "BRAL", "BRALZ", "CALL", "HALT", "IN", "OUT"};

int main(void)
{

	int ntoken, vtoken;

	ntoken = yyparse();
	while(ntoken) {
		printf("%d\n", ntoken);
		if(yyparse() == NULL) {
			printf("Empty !!!!!!!!!!\n");
			return 1;
		}


		scanf("\n", );
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





	return 0;
}

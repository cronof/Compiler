#include <stdio.h>
#include "regAll.h"
#include "parser.tab.h"
#include "node.h"
#include <iostream>
using namespace std;
extern int yyparse();
extern int yylineno;
extern char* yytext;

int main()
{
	int ntoken = yyparse();
	while(ntoken) {
		if(yyparse() == NULL) {
			cout<<"Empty !!!!!!!!!!"<<'\n';
			return 1;
		}
		cout<< ntoken << '\n';
		return 0;
	}
}

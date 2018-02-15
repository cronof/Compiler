%{
	#include "register.h"
	#include "parser.tab.h"
%}

%%
"print"						{return print;}
"exit"						{return exit_command;}
[a-zA-Z]			   	{yylval.id = yytext[0]; return identifier;}
[0-9]+            {yylval.num = atoi(yytext); return number;}
[ \t\n]           ;
[-+=;]           	{return yytext[0];}
.                 printf("unexpected character\n");
"LOAD"        { return 'LOAD_IST'; }
"ADD"         { return 'ADD_IST'; }
"SUB"         { return 'SUB_IST'; }
"OR"          { return 'OR_IST'; }
"XOR"         { return 'XOR_IST'; }
"BRA"         { return 'BRA_IST'; }
"BRAZ"        { return 'BRAZ_IST'; }
"BRAL"        { return 'BRAL_IST'; }
"BRALZ"       { return 'BRALZ_IST'; }
"CALL"        { return 'CALL_IST'; }
"HALT"        { return 'HALT_IST'; }
"IN"          { return 'IN_IST'; }
"OUT"         { return 'OUT_IST'; }
"="          	{ return('='); }
"+"          	{ return('+'); }
"-"           { return('-'); }
">"           { return('>'); }
"<"           { return('<'); }
"."           { return('.'); }
","           { return(','); }
"["           { return('['); }
"]"           { return(']'); }
"("           { return('('); }
")"           { return(')'); }
%%

int yywrap(void)
{
	return 1;
}

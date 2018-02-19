%{
	#include "IstToken.h"
	#include "parser.tab.h"
%}

%%
"print"						{return print;}
"exit"						{return exit_command;}
[a-zA-Z]			   	{yylval.id = yytext[0]; return identifier;}
[0-9]+            {yylval.num = atoi(yytext); return number;}
[ \t\n]           ;
[-+*/=;]          {return yytext[0];}
.                 printf("unexpected character\n");

"LOAD"        { return '0001' }
"ADD"         { return '0100' }
"SUB"         { return '0101' }
"OR"          { return '0110' }
"XOR"         { return '0111' }
"BRA"         { return '1000' }
"BRAZ"        { return '1001' }
"BRAL"        { return '1010' }
"BRALZ"       { return '1011' }
"CALL"        { return '1100' }
"HALT"        { return '1110' }
"IN"          { return '1101' }
"OUT"         { return '1111' }

%%

int yywrap(void)
{
	return 1;
}

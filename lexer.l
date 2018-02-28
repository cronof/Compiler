%{
	// #include "regAll.hpp"
	#include "parser.tab.h"
%}
int REG;
%%

"LOAD"        { return LOAD_IST; }
"ADD"         { return ADD_IST; }
"SUB"         { return SUB_IST; }
"OR"          { return OR_IST; }
"XOR"         { return XOR_IST; }
"BRA"         { return BRA_IST, s_nostore ; }
"BRAZ"        { return BRAZ_IST, s_nostore ; }
"BRAL"        { return BRAL_IST, s_nostore ; }
"BRALZ"       { return BRALZ_IST, s_nostore ; }
"CALL"        { return CALL_IST, REG_PC ; }
"HALT"        { return HALT_IST, s_execute; }
"IN"          { return IN_IST; }
"OUT"         { return OUT_IST; }
"R[0-9]|(1[0-5])" { yylval.reg = atoi(yytext); return REG;}

.              printf("unexpected character\n");
%%

int yywrap(void) { return 1; }

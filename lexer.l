%{
	#include "instructions.h"
	#include "parser.tab.h"
%}

%%

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
.              printf("unexpected character\n");
%%

int yywrap(void)
{
	return 1;
}

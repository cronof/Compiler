#include "node.h"
#include "parser.hpp"
#include "regAll.h"
#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;
char F_Load(){  cout << LOAD_IST << '\n';}
char F_Add(){   cout << ADD_IST << '\n';}
char F_Sub(){   cout << SUB_IST << '\n';}
char F_Or(){    cout << OR_IST << '\n';}
char F_Xor(){   cout << XOR_IST << '\n';}
char F_Bra(){   cout << BRA_IST << '\n';}
char F_Braz(){  cout << BRAZ_IST << '\n';}
char F_Bral(){  cout << BRAL_IST << '\n';}
char F_Bralz(){ cout << BRALZ_IST << '\n';}
char F_Call(){  cout << CALL_IST << '\n';}
char F_Halt(){  cout << HALT_IST << '\n';}
char F_In(){    cout << IN_IST << '\n';}
char F_Out(){   cout << OUT_IST << '\n';}

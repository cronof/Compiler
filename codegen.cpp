//#include "node.hpp"
#include "parser.tab.h"
#include "regAll.hpp"
#include <iostream>
#include <fstream>
#include <vector>
#include <stdio.h>
extern "Cpp" Statement, CodeGenContext;
using namespace std;
char F_Load(statement s){
  cout << LOAD_IST << '\n';
  cout << "Regisetr: "<< s << endl;
}/*
char F_Add(statement s1, statement s2){
  cout << ADD_IST << '\n';
  cout << "Regisetr: "<< s1 + s2 << endl;
}
char F_Sub(){
  cout << SUB_IST << '\n';
  cout << s << '\n';
}
char F_Or(){
  cout << OR_IST << '\n';

}
char F_Xor(){
  cout << XOR_IST << '\n';

}
char F_Bra(){
  cout << BRA_IST << '\n';

}
char F_Braz(){
  cout << BRAZ_IST << '\n';

}
char F_Bral(){
  cout << BRAL_IST << '\n';

}
char F_Bralz(){
  cout << BRALZ_IST << '\n';

}
char F_Call(){
  cout << CALL_IST << '\n';

}
char F_Halt(){
  cout << HALT_IST << '\n';

}
char F_In(){
  cout << IN_IST << '\n';

}
char F_Out(){
  cout << OUT_IST << '\n';

}*/

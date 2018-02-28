#include "node.hpp"
#include "parser.tab.h"
// #include "regAll.hpp"
#include <iostream>
#include <fstream>
#include <vector>
#include <stdio.h>
//#include "codegen.hpp"
//#include "parser.hpp"


using namespace std;

char F_Load(int s){
  cout << LOAD_IST << '\n';
  cout << "Regisetr: "<< s << endl;
}
char F_Add(int s1, int s2){
  cout << ADD_IST << '\n';
  cout << "Regisetr: "<< s1 << '\n';
  cout << "Regisetr: "<< s2 << endl;
}
char F_Sub(int s1, int s2){
  cout << SUB_IST << '\n';
  cout << "Regisetr: "<< s1 << '\n';
  cout << "Regisetr: "<< s2 << endl;
}
char F_Or(int s1, int s2){
  cout << OR_IST << '\n';
  cout << "Regisetr: "<< s1 << '\n';
  cout << "Regisetr: "<< s2 << endl;
}
char F_Xor(int s1, int s2){
  cout << XOR_IST << '\n';
  cout << "Regisetr: "<< s1 << '\n';
  cout << "Regisetr: "<< s2 << endl;
}
char F_Bra(int s1, int s2){
  cout << BRA_IST << '\n';
  cout << "Regisetr: "<< s1 << '\n';
  cout << "Regisetr: "<< s2 << endl;
}
char F_Braz(int s1, int s2){
  cout << BRAZ_IST << '\n';
  cout << "Regisetr: "<< s1 << '\n';
  cout << "Regisetr: "<< s2 << endl;
}
char F_Bral(int s1, int s2){
  cout << BRAL_IST << '\n';
  cout << "Regisetr: "<< s1 << '\n';
  cout << "Regisetr: "<< s2 << endl;
}
char F_Bralz(int s1, int s2){
  cout << BRALZ_IST << '\n';
  cout << "Regisetr: "<< s1 << '\n';
  cout << "Regisetr: "<< s2 << endl;
}
char F_Call(int s1, int s2){
  cout << CALL_IST << '\n';
  cout << "Regisetr: "<< s1 << '\n';
  cout << "Regisetr: "<< s2 << endl;
}
char F_Halt(int s){
  cout << HALT_IST << '\n';
  cout << s << endl;
}
char F_In(){
  cout << IN_IST << '\n';
}
char F_Out(int s){
  cout << OUT_IST << '\n';
  cout << "Regisetr: "<< s << endl;
}

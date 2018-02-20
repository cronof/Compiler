#include <stdio.h>
#include <stdlib.h>
#include "regAll.h"
char Node (void){

}
char Statement (Node n){

}
char Block (Statement s){

}
////////Instructions Fucntion/////////////

void f_Load (Statement s){
  RD = s;
}
char f_Add (Statement s1, Statement s2){
  RD = s1 + s2;
  return RD;
}
char f_Sub (Statement s1, Statement s2){
  RD = s1 - s2;
  return RD;
}
char f_Or (Statement s1, Statement s2){
  //RD = s1 + s2;
  return RD;
}
char f_Xor (Statement s1, Statement s2){

}
char f_Bra (Statement s){

}
char f_Braz (Statement s){

}
char f_Bral (Statement s){

}
char f_Bralz (Statement s){

}
char f_Call (Statement s){

}
char f_Halt (Statement s){

}
char f_In (Statement s){

}
char f_Out (Statement s){

}

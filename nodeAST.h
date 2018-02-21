#include <stdio.h>
#include <stdlib.h>
#include "regAll.h"
/*char Node (void){

}
char Statement (Node n){

}
char Block (Statement s){

}*/
////////Instructions Fucntion/////////////

void f_Load (char r){
  RD = r;
}
char f_Add (char ra, char rb){
  RD = ra + rb;
  return RD;
}
char f_Sub (char ra, char rb){
  RD = ra - rb;
  return RD;
}
char f_Or (char ra, char rb){
  RD = ra | rb;
  return RD;
}
char f_Xor (char ra, char rb){
  RD = ra ^ rb;
  return RD;
}
char f_Bra (char rb){
  PC = rb;
  return PC;
}
char f_Braz (char ra, char rb){
  RD = ra | rb;
  return RD;
}
char f_Bral (char rb){
  PC = rb;
  return PC;
}
char f_Bralz (char ra, char rb){
  if(r1 == 0)
    return RD = rb;
}
char f_Call (char rb){
  RD = PC;
  PC = rb;
}
void f_Halt (){
  exit;
}
void f_In (){
  RD = input;
}
char f_Out (char ra){
  out = ra;
}

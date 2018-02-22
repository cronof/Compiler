#include <stdio.h>
#include <stdlib.h>
#include "regAll.h"

char Statement (cahr s){

}

////////Instructions Fucntion/////////////

void f_Load (char r){
  // RD = r;
  printf("%X", LOAD_IST);
}
char f_Add (char ra, char rb){
  //return RD = ra + rb;
  printf("%s\n", ADD_IST);
}
char f_Sub (char ra, char rb){
//  RD = ra - rb;
//  return RD;
  printf("%s\n", SUB_IST);
}
char f_Or (char ra, char rb){
//  RD = ra | rb;
//  return RD;
  printf("%s\n", OR_IST);
}
char f_Xor (char ra, char rb){
//  RD = ra ^ rb;
//  return RD;
  printf("%s\n", XOR_IST);
}
char f_Bra (char rb){
//  PC = rb;
//  return PC;
  printf("%s\n", BRA_IST);
}
char f_Braz (char ra, char rb){
//  RD = ra | rb;
//  return RD;
  printf("%s\n", BRAZ_IST);
}
char f_Bral (char rb){
//  PC = rb;
//  return PC;
  printf("%s\n", BRAL_IST);
}
char f_Bralz (char ra, char rb){
//  if(r1 == 0)
//    return RD = rb;
    printf("%s\n", );
}
char f_Call (char rb){
//  RD = PC;
//  PC = rb;
  printf("%s\n", CALL_IST);
}
void f_Halt (){
  printf("%s\n", HALT_IST);
}
void f_In (){
  //RD = input;
  printf("%s\n", IN_IST);
}
char f_Out (char ra){
  //out = ra;
  printf("%s\n", OUT_IST);
}

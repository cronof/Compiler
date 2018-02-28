//4bit instruction
#include <iostream>
#define LOAD_IST 0x01
#define ADD_IST 0x04
#define SUB_IST 0x05
#define OR_IST  0x06
#define XOR_IST 0x07
#define BRA_IST 0x08
#define BRAZ_IST 0x09
#define BRAL_IST 0x0A
#define BRALZ_IST 0x0B
#define CALL_IST 0x0C
#define IN_IST 0x0D
#define HALT_IST 0x0E
#define OUT_IST 0x0F
//3bits
#define s_fetch = 0x00; // fetch
#define s_decode = 0x01; // decode
#define s_execute = 0x02; // execute
#define s_store = 0x03; // store
#define s_nostore = 0x04; // no store

#define PC =0x00; //8-bit Program Counter
#define W =0x00; //8-bit Accumulator
#define IR =0x00; //8-bit Instruction Register
//4bit ---half of char
//char RA;
//char RB;
//char RD;

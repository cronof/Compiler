//4bit instruction
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
char PC; //8-bit Program Counter
char W; //8-bit Accumulator
char IR; //8-bit Instruction Register
//4bit ---half of char
char RD;
char RA;
char RB;

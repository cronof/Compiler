//4bit instruction
#define LOAD_IST 0001
#define ADD_IST 0100
#define SUB_IST 0101
#define OR_IST  0110
#define XOR_IST 0111
#define BRA_IST 1000
#define BRAZ_IST 1001
#define BRAL_IST 1010
#define BRALZ_IST 1011
#define CALL_IST 1100
#define HALT_IST 1110
#define IN_IST 1101
#define OUT_IST 1111
char PC; //8-bit Program Counter
char W; //8-bit Accumulator
char IR; //8-bit Instruction Register
//4bit ---half of char
char RD;
char RA;
char RB;

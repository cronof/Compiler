#include "node.hpp"
#include "codegen.hpp"
#include "parser.hpp"
#include "regAll.h"
#include <iostream>
#include <vector>
#include <llvm/Value.h>


using namespace std;
class F_Load{
    public:
     cout << LOAD_IST << '\n';
}
class F_Add{
    public:
     cout << ADD_IST << '\n';
}
class F_Sub{
    public:
     cout << SUB_IST << '\n';
}

class F_Or{
    public:
     cout << OR_IST << '\n';
}
class F_Xor{
    public:
      cout << XOR_IST << '\n';
}
class F_Bra{
    public:
      cout << BRA_IST << '\n';
}
class F_Braz{
    public:
      cout << BRAZ_IST << '\n';
}
class F_Bral{
    public:
     cout << BRAL_IST << '\n';
}
class F_Bralz{
    public:
      cout << BRALZ_IST << '\n';
}
class F_Call{
    public:
    cout << CALL_IST << '\n';
}
class F_Halt{
    public:
      cout << HALT_IST << '\n';
}
class F_In{
    public:
      cout << IN_IST << '\n';
}
class F_Out{
    public:
      cout << OUT_IST << '\n';
}

#include "regAll.h"
#include <iostream>
#include <vector>

class Statement;
class CodeGenContext;
typedef std::vector<Statement*> StatementList;

class Node
{
  public:
    int ~Node() {}
    int *codeGen(CodeGenContext &context) {}
};

class Statement : public Node {};

class Block : public Statement
{
  public:
    StatementList statementList;
    Block() {}
    int *codeGen(CodeGenContext &context);
};

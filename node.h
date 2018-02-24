#include "regAll.h"
#include <iostream>
#include <vector>

class Statement;
class CodeGenContext;
typedef std::vector<Statement*> StatementList;

class Node
{
  public:
    virtual ~Node() {}
    virtual int *codeGen(CodeGenContext &context) {}
};

class Statement : public Node {};

class Block : public Statement
{
  public:
    StatementList statementList;
    Block() {}
    virtual int *codeGen(CodeGenContext &context);
};

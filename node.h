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
    virtual llvm::Value *codeGen(CodeGenContext &context) {}
};

class Statement : public Node {};

class Block : public Statement
{
  public:
    StatementList statementList;
    Block() {}
    virtual llvm::Value *codeGen(CodeGenContext &context);
};


change

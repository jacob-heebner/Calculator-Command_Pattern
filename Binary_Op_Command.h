#ifndef BINARY_OP_COMMAND
#define BINARY_OP_COMMAND

#include "Stack.h"
#include "Expr_Command.h"

class Binary_Op_Command : public Expr_Command {
protected:
	//Binary_Op_Command(Stack<int> & s);

public:
	//copy constructor
	Binary_Op_Command(Stack<int> & s);
	//destructor
	~Binary_Op_Command();
	//execute command
	void execute(void);
	//virtual method for child to impliment
	virtual int evaluate(int n1, int n2);
	//method for child to impliment
	int operator_priority_level();
private:
	Stack <int> & s_;
};

#endif
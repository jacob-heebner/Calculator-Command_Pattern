#ifndef NUM_COMMAND
#define NUM_COMMAND

#include "Stack.h"
#include "Expr_Command.h"

class Num_Command : public Expr_Command {
public:
	Num_Command(Stack<int> & s, int n);
	//adds number to stack
	void execute(void);
	int operator_priority_level();
private:
	Stack<int> & s_;
	int n_;
};
#endif

#ifndef SUBTRACT_COMMAND
#define SUBTRACT_COMMAND

#include "Binary_Op_Command.h"

class Subtract_Command : public Binary_Op_Command {
public:
	Subtract_Command(Stack<int> & stack);
	//evaluates -
	int evaluate(int n1, int n2);
	//assigns operator priority
	int operator_priority_level();
};

#endif
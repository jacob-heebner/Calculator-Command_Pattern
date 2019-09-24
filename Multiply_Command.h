#ifndef MULTIPLY_COMMAND
#define MULTIPLY_COMMAND

#include "Binary_Op_Command.h"

class Multiply_Command : public Binary_Op_Command {
public:
	Multiply_Command(Stack<int> & stack);
	//evaluates *
	int evaluate(int n1, int n2);
	//assigns operator priority
	int operator_priority_level();
};

#endif
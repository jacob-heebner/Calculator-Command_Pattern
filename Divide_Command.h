#ifndef DIVIDE_COMMAND
#define DIVIDE_COMMAND

#include "Binary_Op_Command.h"

class Divide_Command : public Binary_Op_Command {
public:
	Divide_Command(Stack<int> & stack);
	//evaluates 
	int evaluate(int n1, int n2);
	//assign priority level
	int operator_priority_level();
};

#endif
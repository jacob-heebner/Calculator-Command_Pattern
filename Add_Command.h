#ifndef ADD_COMMAND
#define ADD_COMMAND

#include "Binary_Op_Command.h"

class Add_Command : public Binary_Op_Command {
public:
	Add_Command(Stack<int> & stack);
	//evaluates +
	int evaluate(int n1, int n2);
	//assigns priority level
	int operator_priority_level();
};

#endif
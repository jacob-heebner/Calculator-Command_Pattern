#ifndef MOD_COMMAND
#define MOD_COMMAND

#include "Binary_Op_Command.h"

class Mod_Command : public Binary_Op_Command {
public:
	Mod_Command(Stack<int> & stack);
	//evaluates %
	int evaluate(int n1, int n2);
	//assigns operator level
	int operator_priority_level();
};

#endif
//currently not used, may be used for infix to post fix if redesigned

#ifndef PARENTHESIS_COMMAND
#define PARENTHESIS_COMMAND

#include "Binary_Op_Command.h"

class Parenthesis_Command : public Binary_Op_Command {
	int evaluate(int n1, int n2);
};

#endif
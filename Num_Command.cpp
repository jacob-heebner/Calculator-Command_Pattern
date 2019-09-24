#include "Num_Command.h"

Num_Command::Num_Command(Stack<int> & s, int n)
	:s_(s),
	n_(n)
{
	
}
//pushes number to stack
void Num_Command::execute(void) {
	s_.push(n_);
}

int Num_Command::operator_priority_level() {
	return 0;
}

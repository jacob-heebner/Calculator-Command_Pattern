#include "Multiply_Command.h"

Multiply_Command::Multiply_Command(Stack<int> & stack)
	:Binary_Op_Command(stack) {

}

//evaluates * command
int Multiply_Command::evaluate(int n1, int n2) {
	return n1 * n2;
}
//assigns operator priority
int Multiply_Command::operator_priority_level() {
	return 1;
}
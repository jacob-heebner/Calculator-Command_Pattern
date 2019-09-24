#include "Subtract_Command.h"

Subtract_Command::Subtract_Command(Stack<int> & stack)
	:Binary_Op_Command(stack) {

}
//evaluates - command
int Subtract_Command::evaluate(int n1, int n2) {
	return n1 - n2;
}

//assigns operator priority
int Subtract_Command::operator_priority_level() {
	return 0;
}
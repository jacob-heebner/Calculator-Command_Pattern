#include "Divide_Command.h"

Divide_Command::Divide_Command(Stack<int> & stack)
	:Binary_Op_Command(stack) {

}

//evaluate divide command
int Divide_Command::evaluate(int n1, int n2) {
	if (n2 == 0) {
		throw 0;
	}
	return n1 / n2;
}

//assign priority level
int Divide_Command::operator_priority_level() {
	return 1;
}
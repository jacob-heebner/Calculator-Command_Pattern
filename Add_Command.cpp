#include "Add_Command.h"

Add_Command::Add_Command(Stack<int> & stack) 
	:Binary_Op_Command(stack) {

}

//evaluates +
int Add_Command::evaluate(int n1, int n2) {
	return n1 + n2;
}
//assigns priority level
int Add_Command::operator_priority_level() {
	return 0;
}
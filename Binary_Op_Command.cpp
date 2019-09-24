#include "Binary_Op_Command.h"


Binary_Op_Command::Binary_Op_Command(Stack<int> & s)
	:s_(s)
{
	
}

Binary_Op_Command::~Binary_Op_Command() {

}

//pops two then evaluates
void Binary_Op_Command::execute(void) {
	int n2 = s_.top();
	s_.pop();
	int n1 = s_.top();
	s_.pop();
	int result = this->evaluate(n1, n2);
	s_.push(result);
}

//child commands will be called
int Binary_Op_Command::evaluate(int n1, int n2) {
	
}
//child priority level will be called
int Binary_Op_Command::operator_priority_level() {

}
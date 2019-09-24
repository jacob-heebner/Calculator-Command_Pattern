#include "Mod_Command.h"

Mod_Command::Mod_Command(Stack<int> & stack)
	:Binary_Op_Command(stack) {

}
//evaluates % command
int Mod_Command::evaluate(int n1, int n2) {
	return n1 % n2;
}

//assigns operator level
int Mod_Command::operator_priority_level() {
	return 1;
}
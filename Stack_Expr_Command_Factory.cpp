#include "Stack_Expr_Command_Factory.h"

Stack_Expr_Command_Factory::~Stack_Expr_Command_Factory() {
	delete add_;
	delete subtract_;
	delete multiply_;
	delete divide_;
	delete mod_;
}

Stack_Expr_Command_Factory::Stack_Expr_Command_Factory(Stack<int> & stack)
	:stack_(stack) {
	add_ = new Add_Command(stack_);
	subtract_ = new Subtract_Command(stack_);
	multiply_ = new Multiply_Command(stack_);
	divide_ = new Divide_Command(stack_);
	mod_ = new Mod_Command(stack_);
}

Expr_Command * Stack_Expr_Command_Factory::create_number_command(int num) {
	Expr_Command * number = new Num_Command(stack_, num);
	return number;
}

Expr_Command * Stack_Expr_Command_Factory::create_add_command() {
	return add_;
}

Expr_Command * Stack_Expr_Command_Factory::create_subtract_command() {
	return subtract_;
}

Expr_Command * Stack_Expr_Command_Factory::create_multiply_command() {
	return multiply_;
}

Expr_Command * Stack_Expr_Command_Factory::create_divide_command() {
	return divide_;
}

Expr_Command * Stack_Expr_Command_Factory::create_mod_command() {
	return mod_;
}
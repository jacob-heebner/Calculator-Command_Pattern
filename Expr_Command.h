//Parent Command
//binary and number commands inherit from this

#ifndef EXPR_COMMAND_H
#define EXPR_COMMAND_H

#include "Stack.h"

class Expr_Command {
public:
	//constructor
	Expr_Command();
	//virtual command for children to implement
	virtual void execute() = 0;
	//virtual command for children to implement
	virtual int operator_priority_level() = 0;
private:
	int priority;
};
#endif
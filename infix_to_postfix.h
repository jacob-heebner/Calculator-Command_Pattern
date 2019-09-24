#ifndef INFIX_TO_POSTFIX
#define INFIX_TO_POSTFIX

#include "Stack.h"
#include <iostream>
#include <stdexcept>
#include <cstdio>
#include <sstream>
#include <ctype.h>
#include "Num_Command.h"
#include "Add_Command.h"
#include "Subtract_Command.h"
#include "Multiply_Command.h"
#include "Divide_Command.h"
#include "Mod_Command.h"
#include "Binary_Op_Command.h"
#include "Stack.h"
#include "Stack_Expr_Command_Factory.h"

class infix_to_postfix {
public:
	//constructor
	infix_to_postfix();
	//convert from infix to postfix
	bool infix_to_postfixed(const std::string & infix, Expr_Command_Factory & factory, Array<Expr_Command *> & postfix);
	//checks if string is valid infix input
	bool check_valid_input(std::string infix);
};

#endif
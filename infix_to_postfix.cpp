#include "infix_to_postfix.h"
infix_to_postfix::infix_to_postfix() {

}


//infix to post fix
bool infix_to_postfix::infix_to_postfixed(const std::string & infix, Expr_Command_Factory & factory, Array<Expr_Command *> & postfix) {
	std::istringstream input(infix);
	std::string token;
	//tracks where parentheses starts and ends
	int pop_count = 0;
	//tracks size of temp
	int size_of_temp;
	Expr_Command * cmd;
	Stack <Expr_Command *> temp;
	Stack <std::string> operation;
	//operation.push("empty");
	//loops until end of string
	while (!input.eof()) {
		input >> token;
		//assigns cmd to correct command
		if (token == "+") {
			cmd = factory.create_add_command();
		}
		else if (token == "-") {
			cmd = factory.create_subtract_command();
		}
		else if (token == "*") {
			cmd = factory.create_multiply_command();
		}
		else if (token == "/") {
			cmd = factory.create_divide_command();
		}
		else if (token == "%") {
			cmd = factory.create_mod_command();
		}
		else if (isdigit(token[0]) == true) {
			cmd = factory.create_number_command(std::stoi(token));
		}

		
		//if cmd is not an integer
		if (isdigit(token[0]) != true) {
			//loop until temp is empty or top operator has less priority than current operator
			if (operation.size() != 0) {
				if (token == ")") {
					while (temp.size() != 0 && operation.top() != "(") {
						postfix.set(postfix.size(), temp.top());
						temp.pop();
						operation.pop();
					}
					if (operation.top() == "(") {
						operation.pop();
					}
				}

				else if (token != "(") {
					while (temp.size() != 0 && cmd->operator_priority_level() <= temp.top()->operator_priority_level() && operation.top() != "(") {
						postfix.set(postfix.size(), temp.top());
						temp.pop();
						operation.pop();

					}
				}
			}
			if (token != ")") {
				if (token != "(") {
					temp.push(cmd);
				}
				operation.push(token);
			}

		}

		//evaluates what is inside the parentheses

		else {
			postfix.set(postfix.size(), cmd);
		}
	}
	size_of_temp = temp.size();
	//move the rest of temp into postfix
	for (int i = 0; i < size_of_temp; i++) {
		postfix.set(postfix.size(), temp.top());
		temp.pop();
	}
	return true;
}

//checks if input is a valid infix string
bool infix_to_postfix::check_valid_input(std::string infix) {
	std::istringstream input(infix);
	std::string token;
	int operator_count = 0;
	int operand_count = 0;
	int open_parentheses = 0;
	int closed_parentheses = 0;
	while (!input.eof()) {
		input >> token;
		if (token == "+" || token == "-" || token == "*" || token == "/" || token == "%") {
			operator_count++;
		}
		else if (isdigit(token[0])) {
			operand_count++;
		}
		else if (token == "(") {
			open_parentheses++;
		}
		else if (token == ")") {
			closed_parentheses++;
		}
		else if (token == "=") {
			return false;
		}
	}
	if (operator_count < operand_count && closed_parentheses == open_parentheses) {
		return true;
	}
	return false;
}
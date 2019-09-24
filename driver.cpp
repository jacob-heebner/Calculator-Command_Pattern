#include "infix_to_postfix.h"

// COMMENT: You should implement the precedence function on
// the command object since it is better place there. Otherwise,
// it is hard to add new commands without having to change the
// underlying algorithm. Also, you are using if-else statements
// as opposed to inheritance and polymorphism, which is a code
// smell.

//precedence function moved onto command object, removed codesmell

// COMMENT: Instead of using C functions to implement parts of the
// calculator. It would be better suited to use a Wrapper Facade.

//infix to postfix moved to a new class, (using a Wrapper Facade)


//main
int main(int argc, char * argv[])
{
	std::string infix;

	//loops till user enters QUIT all caps
	while (infix != "QUIT") {
		try {
			Stack<int> result;
			infix_to_postfix convert;
			Stack_Expr_Command_Factory factory(result);
			std::cout << "Enter your expression: ";
			std::getline(std::cin, infix);
			int length = infix.length();
			if (infix == "QUIT") {
				std::cout << "Calculator exiting..." << std::endl;
			}
			else if (!convert.check_valid_input(infix)) {
				std::cout << "Please enter a valid infix expression." << std::endl;
			}
			else if (infix != "QUIT") {
				Array<Expr_Command *> postfix(length);
				convert.infix_to_postfixed(infix, factory, postfix);
				//evaluate postfixs
				for (int i = 0; i < postfix.size(); i++) {
					postfix.get(i)->execute();
				}
				int answer = result.top();
				std::cout << answer << std::endl;
			}
		}
		catch (int x) {
			std::cout << "Divide by 0 error." << std::endl;
		}
		//catch unexpected errors
		catch (...) {
			std::cout << "An error has occured." << std::endl;
		}
	}
	 
  return 0;
} 

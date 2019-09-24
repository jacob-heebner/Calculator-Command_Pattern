#include "Expr_Command_Factory.h"
class Stack_Expr_Command_Factory : public Expr_Command_Factory {
public:
	~Stack_Expr_Command_Factory();
	Stack_Expr_Command_Factory(Stack<int> & stack);
	//all virtual commands implemented from parent
	//creates number command
	virtual Expr_Command * create_number_command(int num);
	//creates add command
	virtual Expr_Command * create_add_command(void);
	//creates subtract command
	virtual Expr_Command * create_subtract_command(void);
	//creates multiply command
	virtual Expr_Command * create_multiply_command(void);
	//creates divide command
	virtual Expr_Command * create_divide_command(void);
	//creates mod command
	virtual Expr_Command * create_mod_command(void);
private:
	Stack<int> & stack_;
	Expr_Command * add_;
	Expr_Command * subtract_;
	Expr_Command * multiply_;
	Expr_Command * divide_;
	Expr_Command * mod_;
};
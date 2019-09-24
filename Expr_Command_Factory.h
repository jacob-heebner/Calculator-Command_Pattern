//Parent command factory
//stack command factory inherits from this

#include "Num_Command.h"
#include "Add_Command.h"
#include "Subtract_Command.h"
#include "Multiply_Command.h"
#include "Divide_Command.h"
#include "Mod_Command.h"
#include "Binary_Op_Command.h"
class Expr_Command_Factory {
public:
	//constructor
	Expr_Command_Factory(void);
	//all methods are virtual, children must implement
	virtual ~Expr_Command_Factory(void) = 0;
	virtual Expr_Command * create_number_command(int num) = 0;
	virtual Expr_Command * create_add_command(void) = 0;
	virtual Expr_Command * create_subtract_command(void) = 0;
	virtual Expr_Command * create_multiply_command(void) = 0;
	virtual Expr_Command * create_divide_command(void) = 0;
	virtual Expr_Command * create_mod_command(void) = 0;
private:
	Expr_Command_Factory(const Expr_Command_Factory &);
	const Expr_Command_Factory & operator = (const Expr_Command_Factory &);
};
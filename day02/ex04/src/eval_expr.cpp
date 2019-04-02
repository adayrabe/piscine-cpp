#include "evalExpr.hpp"

#include <string>
#include <sstream>

std::string removeSpaces(std::string str)
{
	std::stringstream stream;
	std::string temp;

	stream << str;
	str.clear();
	while (!stream.eof())
	{
		stream >> temp;
		str = str + temp;
	}
	return str;
}

void do_operation(t_list **stack, char op)
{
	Fixed *res;

	if (!(*stack))
	{
		std::cout << "Error - too much operators" << std::endl;
		exit (EXIT_FAILURE);
	}
	Fixed a = *((*stack)->num);
	delete (*stack)->num;
	pop_head(stack);
	if (!(*stack))
	{
		std::cout << "Error - too much operators" << std::endl;
		exit (EXIT_FAILURE);
	}
	Fixed b = *((*stack)->num);
	delete (*stack)->num;
	pop_head(stack);
	if (op == '+')
		res = new Fixed(a + b);
	if (op == '-')
		res = new Fixed(a - b);
	if (op == '*')
		res = new Fixed(a * b);
	if (op == '/')
		res = new Fixed(a / b);
	push_head(stack, res, ' ');
}

Fixed evaluate(t_list *queue)
{
	t_list *stack;

	while (queue != NULL)
	{
		if ((queue)->num)
			push_head(&stack, (queue)->num, ' ');
		else
			do_operation(&stack, (queue)->op);
		pop_head(&queue);
//		if (!queue->next)
//			break;
	}
	std::cout << "H";
}


Fixed eval_expr(std::string str)
{
	t_list *queue;

	str = removeSpaces(str);
	std::cout << str << std :: endl;
	queue = make_polish(str);
	evaluate(queue);
	return Fixed();
}
#include "evalExpr.hpp"

void	addNumber(size_t &i, t_list **res, std::string str)
{
	int 	numInt;
	float	numFloat;
	float	tempFloat;
	Fixed	*temp;

	numInt = (atoi((str.substr(i)).c_str()));
	if (str[i] == '-')
	    i++;
	while (str[i] && isdigit(str[i]))
		i++;
	if (str[i] == '.')
	{
		tempFloat = 0.1;
		numFloat = numInt;
		i++;
		while (str[i] && isdigit(str[i]))
		{
			numFloat = numFloat + tempFloat * (str[i] - '0');
			tempFloat *= 0.1;
			i++;
		}
		temp = new Fixed(numFloat);
		push_tail(res, temp, ' ');
	}
	else
	{
		temp = new Fixed(numInt);
		push_tail(res, temp, ' ');
	}
}

void	addOperations(t_list **res, t_list **operators)
{
	while (*operators && (*operators)->op != '(')
	{
		push_tail(res, NULL, (*operators)->op);
		pop_head(operators);
	}
	if (!(*operators))
	{
		std::cout << "Error - wrong bracket position" << std::endl;
		exit(EXIT_FAILURE);
	}
	pop_head(operators);
}

bool preceede(char op_prev, char op_now)
{
    if (op_prev == '(')
        return false;
	if (op_prev == '-' || op_prev == '+')
	{
		if (op_now == '-' || op_now == '+')
			return true;
		else
			return false;
	}
	return true;
}

t_list *make_polish(std::string str)
{
	t_list *res;
	t_list *operators;
	size_t i = 0;

	res = NULL;
	operators = NULL;
	while (i < str.length())
	{
		if (isdigit(str[i]) || (str[i] == '-' && str[i - 1] != ')' && (i == 0 || !isdigit(str[i - 1]))))
			addNumber(i, &res, str);
		else if (str[i] == ')' && ++i)
			addOperations(&res, &operators);
		else if (str[i] == '(' && ++i)
			push_head(&operators, NULL, '(');
		else if (str[i] == '-' || str[i] == '+' || str[i] == '*' || str[i] == '/')
		{
			while (operators && preceede(operators->op, str[i]))
			{
				push_tail(&res, NULL, operators->op);
				pop_head(&operators);
			}
			push_head(&operators, NULL, str[i]);
			i++;
		}
		else
		{
			std::cout << "Error - wrong symbol" << std::endl;
			exit(EXIT_FAILURE);
		}
	}
    while (operators)
    {
	    push_tail(&res, NULL, operators->op);
	    pop_head(&operators);
    }
	return res;
}
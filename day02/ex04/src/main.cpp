#include "Fixed.class.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Sorry, there has to be exactly one argument passed" << std::endl;
		return 1;
	}
	std::string temp(av[1]);
	std:: cout << eval_expr(temp) << std::endl;
	return 0;
}

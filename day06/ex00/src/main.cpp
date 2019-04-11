
#include <iostream>
#include <sstream>

#include "../inc/functions.hpp"


int main(int ac, const char *av[]) {
	if (ac != 2)
	{
		std::cout << "Error. Usage ./convert string" << std::endl;
		exit (EXIT_FAILURE);
	}
	int i = 0;
	while (isspace(av[1][i]))
		i++;
	if (isChar(&av[1][i]))
		doChar(&av[1][i]);
	else if (isInt(&av[1][i]))
		doInt(&av[1][i]);
	else if (isFloat(&av[1][i]))
		doFloat(&av[1][i]);
	else if (isDouble(&av[1][i]))
		doDouble(&av[1][i]);
	else
	{
		std::cout << "Wrong string, can't convert to anything" << std::endl;;
		exit(EXIT_FAILURE);
	}
	return 0;
}
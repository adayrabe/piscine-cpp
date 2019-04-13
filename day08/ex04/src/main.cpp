
#include <iostream>
#include "functions.hpp"

#include <algorithm>
int main(int ac, const char *av[])
{
	if (ac != 2)
	{
		std::cout << "Error - there has to be exactly 1 argument" << std::endl;
		exit(EXIT_FAILURE);
	}
	try
	{
		std::queue<Token *> res = makeTokens(av[1]);
		std::cout << "Tokens: ";
		print_queue(res);
		res = makePolish(res);
		std::cout << "Postfix: ";
		print_queue(res);
		int result = evaluatePolish(res);
		std::cout << "Res: " << result << std::endl;
	}
	catch (Token::WrongSymbolException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Token::NoOpenBracketException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Token::NoClosingBracketException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Token::OperatorsOverflowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Token::NumbersOverflowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Token::EmptyLineException &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
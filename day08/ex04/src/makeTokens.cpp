//
// Created by Dayrabekov Artem on 2019-04-13.
//

#include "functions.hpp"

std::string removeSpaces(std::string str)
{
	std::stringstream stream;
	std::string temp;
	size_t i = str.length();

	while (isspace(str[i - 1]))
		i--;
	str.erase(i, str.length() - i);
	stream << str;
	str.clear();
	while (!stream.eof())
	{
		stream >> temp;
		str = str + temp;
	}
	return str;
}

void addNum(std::queue<Token *> &res, std::string str, size_t &i)
{
	int temp = (atoi(&(str.c_str())[i]));
	res.push(new Num(temp));
	if (str[i] == '-')
		i++;
	while (str[i] && isdigit(str[i]))
		i++;
	i--;
}

void print_queue(std::queue<Token *> q)
{
	while (!q.empty())
	{
		std::cout << q.front()->getName() << " ";
		q.pop();
	}
	std::cout << std::endl;
}

std::queue <Token*> makeTokens(std::string str)
{
	std::queue<Token *>res;

	str = removeSpaces(str);
	for (size_t i = 0; i < str.length(); i++)
	{
		if (isdigit(str[i]) || (str[i] == '-' && str[i - 1] != ')' && (i == 0 || !isdigit(str[i - 1]))))
			addNum(res, str, i);
		else if (str[i] == ')')
			res.push(new Par(false));
		else if (str[i] == '(')
			res.push(new Par(true));
		else if (str[i] == '-' || str[i] == '+' || str[i] == '*' || str[i] == '/')
			res.push(new Op(str[i]));
		else
			throw Token::WrongSymbolException();
	}
	if (str.length() == 0)
		throw Token::EmptyLineException();
	return res;
}
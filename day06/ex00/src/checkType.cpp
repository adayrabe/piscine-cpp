//
// Created by Dayrabekov Artem on 2019-04-11.
//

#include "../inc/functions.hpp"

bool isChar(std::string str)
{
	if (str[0] == '\'' && str[2] == '\'' && str[3] == '\0')
		return true;
	return false;
}

bool isInt(std::string str)
{
	int i = 0;
	if (str[0] == '-' || str[i] == '+')
		i++;
	while (isdigit(str[i]))
		i++;
	while (isspace(str[i]))
		i++;
	if (str[i])
		return false;
	return true;
}

bool isFloat(std::string str)
{
	int i;

	if (str.compare("-inff") || str.compare("+inff") || str.compare("nanf"))
		return true;
	i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (isdigit(str[i]))
		i++;
	if (str[i] != '.')
		return false;
	i++;
	if (!isdigit(str[i]))
		return false;
	while (isdigit(str[i]))
		i++;
	if (str[i] == 'f')
	{
		i++;
		while (isspace(str[i]))
			i++;
		if (str[i] == '\0')
			return true;
	}
	return false;
}


bool isDouble(std::string str)
{
	int i;

	if (str.compare("-inf") || str.compare("+inf") || str.compare("nan"))
		return true;
	i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (isdigit(str[i]))
		i++;
	if (str[i] != '.')
		return false;
	i++;
	if (!isdigit(str[i]))
		return false;
	while (isdigit(str[i]))
		i++;
	while (isspace(str[i]))
		i++;
	if (str[i] == '\0')
		return true;
	return false;
}
//
// Created by Dayrabekov Artem on 2019-04-11.
//

#include "../inc/functions.hpp"

void doChar(std::string str)
{
	char c = str[1];
	std::cout << "char: ";
	if (isprint(c))
		std::cout << c << std::endl;
	else
		std::cout << "Non displayable" << std::endl;

	std::cout << "int: " <<  static_cast<int>(c) << std::endl;
	std::cout <<  "float: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

void doInt(std::string str)
{
	int i = atoi(str.c_str());

	std::cout << "char: ";
	if (i > CHAR_MAX || i < CHAR_MIN)
		std::cout << "impossible" << std::endl;
	else
	{
		char c = static_cast<char>(i);
		if (isprint(c))
			std::cout << c << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
}


void doFloat(std::string str)
{
	float f = atof(str.c_str());

	std::cout << "char: ";
	if (f > CHAR_MAX || f < CHAR_MIN || str == "nanf")
		std::cout << "impossible" << std::endl;
	else
	{
		char c = static_cast<char>(f);
		if (isprint(c))
			std::cout << c << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	std::cout << "int: ";
	int i = 0;
	if (f > INT_MAX || f < INT_MIN || str == "nanf")
		std::cout << "impossible" << std::endl;
	else
	{
		i = static_cast<int>(f);
		std::cout << i << std::endl;
	}
	std::cout << "float: " << f;
	if (f == i)
		std::cout << ".0";
	std::cout << "f" << std::endl;
	double d = static_cast<double>(f);
	std::cout << "double: " << d;
	if (d == i)
		std::cout << ".0";
	std::cout<< std::endl;

}

void doDouble(std::string str)
{
	double d = atof(str.c_str());

	std::cout << "char: ";
	if (d > CHAR_MAX || d < CHAR_MIN || str == "nan")
		std::cout << "impossible" << std::endl;
	else
	{
		char c = static_cast<char>(d);
		if (isprint(c))
			std::cout << c << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	std::cout << "int: ";
	int i = 0;
	if (d > INT_MAX || d < INT_MIN || str == "nan")
		std::cout << "impossible" << std::endl;
	else
	{
		i = static_cast<int>(d);
		std::cout << i << std::endl;
	}
	float f = static_cast<float>(d);
	std::cout << "float: " << f;
	if (f == i)
		std::cout << ".0";
	std::cout << "f" << std::endl;
	std::cout << "double: " << d ;
	if (d == i)
		std::cout << ".0";
	std::cout << std::endl;
}
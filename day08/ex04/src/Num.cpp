//
// Created by Dayrabekov Artem on 2019-04-13.
//

#include "../inc/Num.hpp"
#include <string>

Num::Num() : Token("Num")
{}

Num::Num(Num const &other) : Token(other)
{
	*this = other;
}

//TODO: add correct variable assignments
Num &Num::operator=(Num const &other)
{
	_num = other.getNum();
	return *this;
}

Num::~Num()
{}

//std::string Num::getName() const
//{
//	return _name + "(" + std::to_string(_num) + ")";
//}

int Num::getNum() const
{
	return _num;
}

Num::Num(int num) : Token("Num"), _num(num)
{
	_name = _name + "(" + std::to_string(_num) + ")";
	_isNum = true;
}

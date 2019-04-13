//
// Created by Dayrabekov Artem on 2019-04-13.
//

#include "../inc/Par.hpp"

Par::Par() : Token("Par")
{}

Par::Par(Par const &other) : Token(other)
{
	*this = other;
}

//TODO: add correct variable assignments
Par &Par::operator=(Par const &other)
{
	static_cast<void>(other);
	return *this;
}

Par::~Par()
{}

Par::Par(bool isOpen) : Token("Par")
{
	if (isOpen)
	{
		_isOpen = true;
		_name += "Open";
	}
	else
	{
		_isClose = true;
		_name += "Close";
	}
}

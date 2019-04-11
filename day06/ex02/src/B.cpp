//
// Created by Dayrabekov Artem on 2019-04-11.
//

#include "B.hpp"

B::B()
{}

B::B(B const &other)
{
	*this = other;
}

//TODO: add correct variable assignments
B &B::operator=(B const &other)
{
	static_cast<void>(other);
	return *this;
}

B::~B()
{}

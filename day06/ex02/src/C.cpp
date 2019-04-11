//
// Created by Dayrabekov Artem on 2019-04-11.
//

#include "C.hpp"

C::C()
{}

C::C(C const &other)
{
	*this = other;
}

//TODO: add correct variable assignments
C &C::operator=(C const &other)
{
	static_cast<void>(other);
	return *this;
}

C::~C()
{}

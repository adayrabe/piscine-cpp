//
// Created by Dayrabekov Artem on 2019-04-11.
//

#include "A.hpp"

A::A()
{}

A::A(A const &other)
{
	*this = other;
}

//TODO: add correct variable assignments
A &A::operator=(A const &other)
{
	static_cast<void>(other);
	return *this;
}

A::~A()
{}

//
// Created by Dayrabekov Artem on 2019-04-11.
//

#include "Base.hpp"

Base::Base()
{}

Base::Base(Base const &other)
{
	*this = other;
}

//TODO: add correct variable assignments
Base &Base::operator=(Base const &other)
{
	static_cast<void>(other);
	return *this;
}

Base::~Base()
{}

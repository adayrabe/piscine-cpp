//
// Created by Dayrabekov Artem on 2019-04-11.
//

#ifndef EX00_B_HPP
#define EX00_B_HPP

#include "Base.hpp"
#include <iostream>

class B : public Base
{
	public:
		B();

		B(B const &other);

		B &operator=(B const &other);

		virtual ~B();
};


#endif //EX00_B_HPP

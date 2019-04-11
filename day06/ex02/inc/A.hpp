//
// Created by Dayrabekov Artem on 2019-04-11.
//

#ifndef EX00_A_HPP
#define EX00_A_HPP

#include "Base.hpp"
#include <iostream>

class A : public Base
{
	public:
		A();

		A(A const &other);

		A &operator=(A const &other);

		virtual ~A();
};


#endif //EX00_A_HPP

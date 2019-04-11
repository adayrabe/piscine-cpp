//
// Created by Dayrabekov Artem on 2019-04-11.
//

#ifndef EX00_C_HPP
#define EX00_C_HPP

#include "Base.hpp"
#include <iostream>

class C : public Base
{
	public:
		C();

		C(C const &other);

		C &operator=(C const &other);

		virtual ~C();
};


#endif //EX00_C_HPP

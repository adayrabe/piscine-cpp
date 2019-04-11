//
// Created by Dayrabekov Artem on 2019-04-11.
//

#ifndef EX00_BASE_HPP
#define EX00_BASE_HPP


#include <iostream>

class Base
{
	public:
		Base();

		Base(Base const &other);

		Base &operator=(Base const &other);

		virtual ~Base();

};


#endif //EX00_BASE_HPP

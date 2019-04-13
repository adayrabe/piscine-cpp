//
// Created by Dayrabekov Artem on 2019-04-13.
//

#ifndef EX04_PAROPEN_HPP
#define EX04_PAROPEN_HPP


#include <iostream>
#include "Token.hpp"
class Par : public Token
{
	private:
		Par();

	public:
		Par(bool isOpen);

		Par(Par const &other);

		Par &operator=(Par const &other);

		virtual ~Par();
};


#endif //EX04_PAROPEN_HPP

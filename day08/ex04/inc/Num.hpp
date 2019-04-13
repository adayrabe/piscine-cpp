//
// Created by Dayrabekov Artem on 2019-04-13.
//

#ifndef EX04_NUM_HPP
#define EX04_NUM_HPP


#include <iostream>
#include "Token.hpp"

class Num : public Token
{
	private:
		int _num;
		Num();
	public:

		Num(int num);

		Num(Num const &other);

		Num &operator=(Num const &other);

		virtual ~Num();

		int getNum() const;
};


#endif //EX04_NUM_HPP

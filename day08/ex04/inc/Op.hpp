//
// Created by Dayrabekov Artem on 2019-04-13.
//

#ifndef EX04_OP_HPP
#define EX04_OP_HPP


#include <iostream>
#include "Token.hpp"

class Op : public Token
{
	private:
		Op();
		char _op;
		std::string _opName;
	public:
		Op(char op);

		Op(Op const &other);

		Op &operator=(Op const &other);

		virtual ~Op();

		char getOp() const;

		const std::string &getOpName() const;
};


#endif //EX04_OP_HPP

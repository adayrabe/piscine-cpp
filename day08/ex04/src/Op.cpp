//
// Created by Dayrabekov Artem on 2019-04-13.
//

#include "../inc/Op.hpp"

Op::Op() : Token("Op")
{}

Op::Op(Op const &other) : Token(other)
{
	*this = other;
}

//TODO: add correct variable assignments
Op &Op::operator=(Op const &other)
{
	_op = other.getOp();
	_opName = other.getOpName();
	return *this;
}

Op::~Op()
{}

Op::Op(char op) : Token("Op"), _op(op)
{
	_name += '(';
	_name += op;
	_name += ')';
	_isOp = true;
	if (op == '+')
		_opName = "Add";
	if (op == '-')
		_opName = "Substract";
	if (op == '*')
		_opName = "Multiply";
	if (op == '/')
		_opName = "Divide";
}

char Op::getOp() const
{
	return _op;
}

const std::string &Op::getOpName() const
{
	return _opName;
}

//
// Created by Dayrabekov Artem on 2019-04-13.
//

#include "../inc/Token.hpp"

Token::Token()
{}

Token::Token(Token const &other)
{
	*this = other;
}

//TODO: add correct variable assignments
Token &Token::operator=(Token const &other)
{
	_name = other.getName();
	_isClose = other.isClose();
	_isOpen = other.isOpen();
	_isOp = other.isOp();
	_isNum = other.isNum();
	return *this;
}

Token::~Token()
{}

Token::Token(const std::string &name) : _name(name), _isNum(false),
										_isOpen(false), _isClose(false), _isOp(false)
{}

std::string Token::getName() const
{
	return _name;
}

bool Token::isNum() const
{
	return _isNum;
}

bool Token::isOpen() const
{
	return _isOpen;
}

bool Token::isClose() const
{
	return _isClose;
}

bool Token::isOp() const
{
	return _isOp;
}

Token::WrongSymbolException::WrongSymbolException(){}

Token::WrongSymbolException::WrongSymbolException(WrongSymbolException const &other)
{
    *this = other;
}

//TODO: add correct variable assignments

Token::WrongSymbolException & Token::WrongSymbolException::operator= (WrongSymbolException const &other)
{
	static_cast<void>(other);
    return *this;
}

Token::WrongSymbolException::~WrongSymbolException()throw(){}

const char *Token::WrongSymbolException::what() const throw()
{
    return "Error - wrong symbol in expression";
}

Token::NoClosingBracketException::NoClosingBracketException(){}

Token::NoClosingBracketException::NoClosingBracketException(NoClosingBracketException const &other)
{
    *this = other;
}

//TODO: add correct variable assignments

Token::NoClosingBracketException & Token::NoClosingBracketException::operator= (NoClosingBracketException const &other)
{
	static_cast<void>(other);
    return *this;
}

Token::NoClosingBracketException::~NoClosingBracketException()throw(){}

const char *Token::NoClosingBracketException::what() const throw()
{
    return "Error - no matching closing bracket";
}

Token::NoOpenBracketException::NoOpenBracketException(){}

Token::NoOpenBracketException::NoOpenBracketException(NoOpenBracketException const &other)
{
    *this = other;
}

//TODO: add correct variable assignments

Token::NoOpenBracketException & Token::NoOpenBracketException::operator= (NoOpenBracketException const &other)
{
	static_cast<void>(other);
    return *this;
}

Token::NoOpenBracketException::~NoOpenBracketException()throw(){}

const char *Token::NoOpenBracketException::what() const throw()
{
    return "Error - o matching opening bracket";
}

Token::OperatorsOverflowException::OperatorsOverflowException(){}

Token::OperatorsOverflowException::OperatorsOverflowException(OperatorsOverflowException const &other)
{
    *this = other;
}

//TODO: add correct variable assignments

Token::OperatorsOverflowException & Token::OperatorsOverflowException::operator= (OperatorsOverflowException const &other)
{
	static_cast<void>(other);
    return *this;
}

Token::OperatorsOverflowException::~OperatorsOverflowException()throw(){}

const char *Token::OperatorsOverflowException::what() const throw()
{
    return "Error - too many operators for numbers";
}

Token::NumbersOverflowException::NumbersOverflowException(){}

Token::NumbersOverflowException::NumbersOverflowException(NumbersOverflowException const &other)
{
    *this = other;
}

//TODO: add correct variable assignments

Token::NumbersOverflowException & Token::NumbersOverflowException::operator= (NumbersOverflowException const &other)
{
	static_cast<void>(other);
    return *this;
}

Token::NumbersOverflowException::~NumbersOverflowException()throw(){}

const char *Token::NumbersOverflowException::what() const throw()
{
    return "Error - too many numbers for operators";
}

Token::EmptyLineException::EmptyLineException(){}

Token::EmptyLineException::EmptyLineException(EmptyLineException const &other)
{
    *this = other;
}

//TODO: add correct variable assignments

Token::EmptyLineException & Token::EmptyLineException::operator= (EmptyLineException const &other)
{
	static_cast<void>(other);
    return *this;
}

Token::EmptyLineException::~EmptyLineException()throw(){}

const char *Token::EmptyLineException::what() const throw()
{
    return "Error - the line is empty";
}

Token::ZeroDivisionException::ZeroDivisionException(){}

Token::ZeroDivisionException::ZeroDivisionException(ZeroDivisionException const &other)
{
    *this = other;
}

//TODO: add correct variable assignments

Token::ZeroDivisionException & Token::ZeroDivisionException::operator= (ZeroDivisionException const &other)
{
	static_cast<void>(other);
    return *this;
}

Token::ZeroDivisionException::~ZeroDivisionException()throw(){}

const char *Token::ZeroDivisionException::what() const throw()
{
    return "Error - trying to divide by 0";
}

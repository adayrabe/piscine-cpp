//
// Created by Dayrabekov Artem on 2019-04-13.
//

#ifndef EX04_TOKEN_HPP
#define EX04_TOKEN_HPP


#include <iostream>

class Token
{
	private:
		Token();
	protected:
		std::string _name;
		bool _isNum;
		bool _isOpen;
		bool _isClose;
		bool _isOp;
	public:
		Token(const std::string &name);

		Token(Token const &other);

		Token &operator=(Token const &other);

		virtual ~Token();
		std::string getName() const;

		bool isNum() const;

		bool isOpen() const;

		bool isClose() const;

		bool isOp() const;

		class WrongSymbolException : public std::exception
		{
			public:
				WrongSymbolException();

				WrongSymbolException(WrongSymbolException const &other);

				WrongSymbolException &operator=(WrongSymbolException const &other);

				virtual ~WrongSymbolException() throw();

				virtual const char *what() const throw();
		};

		class NoClosingBracketException : public std::exception
		{
			public:
				NoClosingBracketException();

				NoClosingBracketException(NoClosingBracketException const &other);

				NoClosingBracketException &operator=(NoClosingBracketException const &other);

				virtual ~NoClosingBracketException() throw();

				virtual const char *what() const throw();
		};

		class NoOpenBracketException : public std::exception
		{
			public:
				NoOpenBracketException();

				NoOpenBracketException(NoOpenBracketException const &other);

				NoOpenBracketException &operator=(NoOpenBracketException const &other);

				virtual ~NoOpenBracketException() throw();

				virtual const char *what() const throw();
		};

		class OperatorsOverflowException : public std::exception
		{
			public:
				OperatorsOverflowException();

				OperatorsOverflowException(OperatorsOverflowException const &other);

				OperatorsOverflowException &operator=(OperatorsOverflowException const &other);

				virtual ~OperatorsOverflowException() throw();

				virtual const char *what() const throw();
		};

		class NumbersOverflowException : public std::exception
		{
			public:
				NumbersOverflowException();

				NumbersOverflowException(NumbersOverflowException const &other);

				NumbersOverflowException &operator=(NumbersOverflowException const &other);

				virtual ~NumbersOverflowException() throw();

				virtual const char *what() const throw();
		};

		class EmptyLineException : public std::exception
		{
			public:
				EmptyLineException();

				EmptyLineException(EmptyLineException const &other);

				EmptyLineException &operator=(EmptyLineException const &other);

				virtual ~EmptyLineException() throw();

				virtual const char *what() const throw();
		};

		class ZeroDivisionException : public std::exception
		{
			public:
				ZeroDivisionException();

				ZeroDivisionException(ZeroDivisionException const &other);

				ZeroDivisionException &operator=(ZeroDivisionException const &other);

				virtual ~ZeroDivisionException() throw();

				virtual const char *what() const throw();
		};
};


#endif //EX04_TOKEN_HPP

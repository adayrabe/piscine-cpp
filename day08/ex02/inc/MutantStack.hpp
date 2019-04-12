//
// Created by Artem DAYRABEKOV on 2019-04-12.
//

#ifndef EX02_MUTANTSTACK_HPP
#define EX02_MUTANTSTACK_HPP


#include <iostream>
#include <stack>

template <typename  T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack<T>(){}

		MutantStack<T>(MutantStack<T> const &other){*this = other;}

		MutantStack<T> &operator=(MutantStack<T> const &other){}

		virtual ~MutantStack<T>(){}

};


#endif //EX02_MUTANTSTACK_HPP

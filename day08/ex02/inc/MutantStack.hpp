//
// Created by Artem DAYRABEKOV on 2019-04-12.
//

#ifndef EX02_MUTANTSTACK_HPP
#define EX02_MUTANTSTACK_HPP


#include <iostream>
#include <stack>

//template <typename  T>
//typedef typename std::stack<T>::container_type::iterator iterator;

template <typename  T>

class MutantStack : public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::reverse_iterator iterator;
		MutantStack<T>(){}

		MutantStack<T>(MutantStack<T> const &other):std::stack<T>(other){;}
		MutantStack<T>(std::stack<T> const &other):std::stack<T>(other){;}

		MutantStack<T> &operator=(MutantStack<T> const &other)
		{
			return std::stack<T>::operator=(other);
		}

		virtual ~MutantStack<T>(){}
		iterator begin()
		{
			return std::stack<T>::c.rbegin();
		}
		iterator end()
		{
			return std::stack<T>::c.rend();
		}
};


#endif //EX02_MUTANTSTACK_HPP

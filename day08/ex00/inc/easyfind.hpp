//
// Created by Artem DAYRABEKOV on 2019-04-12.
//

#ifndef EX00_EASYFIND_HPP
#define EX00_EASYFIND_HPP
#include <iostream>
#include <algorithm>
#include <list>
#include <vector>


template <typename T>
int easyfind(T& container, int n)
{
	int res = 0;
//	typename T::const_iterator i = std::find(container.begin(), container.end(), n);
	for(typename T::const_iterator i = container.begin(); i != container.end(); i++)
	{
		if (*i == n)
			return res;
		res++;
	}

	throw(std::exception());

}

template <typename T>
void print_container(T& container)
{
	for(typename T::const_iterator i = container.begin(); i != container.end(); i++)
	{
		std::cout << *i << " ";
	}
	std::cout << std::endl;
}
#endif //EX00_EASYFIND_HPP

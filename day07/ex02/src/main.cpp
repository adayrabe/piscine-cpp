//
// Created by Artem DAYRABEKOV on 2019-04-12.
//

#include "Array.hpp"


int main()
{
	Array <int> a(50);
	srand(time(0));
	std::cout << "Created an empty array of 50: " << std::endl << a;
	for (size_t i = 0; i < a.size(); i++)
	{
		a[i] = rand() % 1000;
	}
	std::cout << "==============================================================" << std::endl;

	std::cout << "Filled array with random numbers from 0 to 999: " << std::endl << a;
	std::cout << "Testing operator =" << std::endl;
	Array <int> *b = new Array<int>(a);

	std::cout << "Array b:" << std::endl << *b;
	std::cout << "==============================================================" << std::endl;

	std::cout << "Testing operator[] on array b (valid cases)" << std::endl;
	for (size_t i = 0; i < 10; i++)
		(*b)[i] = 0;

	std::cout << "Array a : " << std::endl << a;
	std::cout << "Array b : " << std::endl << *b;
	std::cout << "==============================================================" << std::endl;

	std::cout << "Testing operator[] on array a (invalid cases)" << std::endl;
	try
	{
		std::cout << "Trying index under 0 (-1)" << std::endl;
		a[-1] = 5;
	}
	catch (Array<int>::IndexOutOfBoundException &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "Trying index above length (50)" << std::endl;
		a[50] = 5;
	}
	catch (Array<int>::IndexOutOfBoundException &e)
	{
		std::cout << e.what() << std::endl;
	}
	delete b;
}
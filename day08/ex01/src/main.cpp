
#include <iostream>
#include "../inc/Span.hpp"

void main_test()
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "Shortest:" << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << "--------------------------------------------------------------" << std::endl;

	std::cout << "Longest:" << std::endl;

	std::cout << sp.longestSpan() << std::endl;
}
void my_test()
{
	srand(time(0));
	unsigned int t = 1000;
	unsigned int range = 10000000;
	Span temp(t);

	std::cout << "Generating " << t << " numbers with range from 0 to " << range - 1 << std::endl;
	for (size_t i = 0; i < t; i++)
	{
		int a = rand() % range;
		std::cout << a << " ";
		temp.addNumber(a);
	}
	std::cout << std::endl;
	std::cout << "--------------------------------------------------------------" << std::endl;

	std::cout << "Shortest:" << std::endl;
	std::cout << temp.shortestSpan() << std::endl;
	std::cout << "--------------------------------------------------------------" << std::endl;

	std::cout << "Longest:" << std::endl;

	std::cout << temp.longestSpan() << std::endl;
}

void exception_tests()
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "Trying to add one more element, should be impossible..." << std::endl;
	try
	{
		sp.addNumber(4);
	}
	catch(Span::VectorFullException &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "--------------------------------------------------------------" << std::endl;

	std::cout << "Trying find span in list, consisting of 0 elements" << std::endl;

	Span sp2(5);

	try
	{
		sp2.shortestSpan();
	}
	catch(Span::NotEnoughElementsException &e)
	{
		std::cout << e.what() << std::endl;
	}
	sp2.addNumber(5);
	std::cout << "--------------------------------------------------------------" << std::endl;

	std::cout << "Trying find span in list, consisting of 1 element" << std::endl;
	try
	{
		sp2.shortestSpan();
	}
	catch(Span::NotEnoughElementsException &e)
	{
		std::cout << e.what() << std::endl;
	}

}

void my_generic_test()
{
	Span sp = Span(20);
	sp.addNumber(100000);
	sp.addNumber(100);
	sp.addNumber(90000);
	sp.addNumber(70000);
	sp.addNumber(20000);
	sp.addNumber(30000);
	sp.addNumber(40000);
	sp.addNumber(50000);
	sp.addNumber(80000);
	sp.addNumber(85000);
	sp.addNumber(75000);
	sp.addNumber(15000);
	sp.addNumber(10000);
	sp.addNumber(60000);




	std::cout << "Shortest:" << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << "--------------------------------------------------------------" << std::endl;

	std::cout << "Longest:" << std::endl;

	std::cout << sp.longestSpan() << std::endl;
}


int main() {

	std::cout << "Their test: " << std::endl;
	main_test();
	std::cout << "=================================================" << std::endl;

	std::cout << "My random test: " << std::endl;

	my_test();
	std::cout << "=================================================" << std::endl;

	std::cout << "My generic test: " << std::endl;

	my_generic_test();
	std::cout << "=================================================" << std::endl;
	std::cout << "Exception tests:" << std::endl;
	exception_tests();
	return 0;
}
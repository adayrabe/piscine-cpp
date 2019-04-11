
#include <iostream>
#include <fstream>

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

Base* generate()
{
	std::ifstream ifs("/dev/random");
	unsigned  char temp;

	ifs >> temp;
	temp %= 3;
	ifs.close();
	Base *res;

	if (temp == 0)
		res = new A();
	if (temp == 1)
		res = new B();
	if (temp == 2)
		res = new C();
	return res;
}

void identify_from_pointer(Base* p)
{
	A* a = dynamic_cast<A*>(p);
	if (a)
		std::cout << "A" << std::endl;
	B* b = dynamic_cast<B*>(p);
	if (b)
		std::cout << "B" << std::endl;
	C* c = dynamic_cast<C*>(p);
	if (c)
		std::cout << "C" << std::endl;
}

void identify_from_reference(Base& p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		static_cast<void>(a);
	}
	catch (std::bad_cast & bc)
	{
		;
	}
	try
	{
		B& b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		static_cast<void>(b);

	}
	catch (std::bad_cast & bc)
	{
		;
	}
	try
	{
		C& c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		static_cast<void>(c);
	}
	catch (std::bad_cast & bc)
	{
		;
	}
}

int main() {
	Base *temp = generate();
	identify_from_pointer(temp);
	identify_from_reference(*temp);
	return 0;
}
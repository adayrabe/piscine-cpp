#include "Fixed.class.hpp"

int main()
{
	Fixed a;
	Fixed b(a);
	Fixed c;

	b.setRawBits(10);
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	c = b;
	std::cout << c.getRawBits() << std::endl;
	c.setRawBits(15);
	std::cout << c.getRawBits() << std::endl;


	return (0);
}
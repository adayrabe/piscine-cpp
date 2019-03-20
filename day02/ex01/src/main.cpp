#include "Fixed.class.hpp"

int main()
{
	Fixed a;
	Fixed b(10);
	Fixed c(42.42f);
	a = Fixed( 1234.4321f );
	std::cout << "Float values: " << std::endl;

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c <<std::endl;
	std::cout << "Raw bits values: " << std::endl;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() <<std::endl;
	std::cout << "Int values: " << std::endl;
	std::cout << a.toInt() << std::endl;
	std::cout << b.toInt() << std::endl;
	std::cout << c.toInt() <<std::endl;
	return (0);
}
#include "Fixed.class.hpp"

int main()
{
	Fixed a;
	Fixed b(10);
	Fixed c(42.42f);
	Fixed d;
	Fixed e(42.42f);
	a = Fixed( 1234.4321f );
	
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl;
	std::cout << "=======================" << std::endl;
	std::cout << "Testing addition: " << std::endl;
	std::cout << a << " + " << b << " = " << a + b << std::endl;
	std::cout << b << " + " << c << " = " << b + c << std::endl;
	std::cout << a << " + " << c << " = " << a + c << std::endl;
	std::cout << a << " + " << d << " = " << a + d << std::endl;
	std::cout << "=======================" << std::endl;
	std::cout << "Testing substraction: " << std::endl;
	std::cout << a << " - " << b << " = " << a - b << std::endl;
	std::cout << b << " - " << c << " = " << b - c << std::endl;
	std::cout << a << " - " << c << " = " << a - c << std::endl;
	std::cout << a << " - " << d << " = " << a - d << std::endl;
	std::cout << "=======================" << std::endl;
	std::cout << "Testing multiplication: " << std::endl;
	std::cout << a << " * " << b << " = " << a * b << std::endl;
	std::cout << b << " * " << c << " = " << b * c << std::endl;
	std::cout << a << " * " << c << " = " << a * c << std::endl;
	std::cout << a << " * " << d << " = " << a * d << std::endl;
	std::cout << "=======================" << std::endl;
	std::cout << "Testing division: " << std::endl;
	std::cout << a << " / " << b << " = " << a / b << std::endl;
	std::cout << b << " / " << c << " = " << b / c << std::endl;
	std::cout << a << " / " << c << " = " << a / c << std::endl;
	std::cout << a << " / " << d << " = " << a / d << std::endl;
	std::cout << "=======================" << std::endl;
	std::cout << "Testing pre-increment: " << std::endl;
	std::cout << "++a = " << ++a << std::endl;
	std::cout << "++b = " << ++b << std::endl;
	std::cout << "++c = " << ++c << std::endl;
	std::cout << "++d = " << ++d << std::endl;
	std::cout << "=======================" << std::endl;
	std::cout << "Testing post-increment: " << std::endl;
	std::cout << "a++ = " << a++ << std::endl;
	std::cout << "b++ = " << b++ << std::endl;
	std::cout << "c++ = " << c++ << std::endl;
	std::cout << "d++ = " << d++ << std::endl;
	std::cout << "=======================" << std::endl;
	std::cout << "Testing post-decrement: " << std::endl;
	std::cout << "a-- = " << a-- << std::endl;
	std::cout << "b-- = " << b-- << std::endl;
	std::cout << "c-- = " << c-- << std::endl;
	std::cout << "d-- = " << d-- << std::endl;
	std::cout << "=======================" << std::endl;
	std::cout << "Testing pre-decrement: " << std::endl;
	std::cout << "--a = " << --a << std::endl;
	std::cout << "--b = " << --b << std::endl;
	std::cout << "--c = " << --c << std::endl;
	std::cout << "--d = " << --d << std::endl;
	std::cout << "=======================" << std::endl;
	std::cout << "Testing operator >: " << std::endl;
	std::cout << a << " > " << b << " ? " << (a > b)  << std::endl;
	std::cout << b << " > " << c << " ? "  << (b > c) << std::endl;
	std::cout << "=======================" << std::endl;
	std::cout << "Testing operator >=: " << std::endl;
	std::cout << a << " >= " << b << " ? "  << (a >= b) << std::endl;
	std::cout << c << " >= " << e << " ? "  << (c >= e) << std::endl;
	std::cout << "=======================" << std::endl;
	std::cout << "Testing operator <: " << std::endl;
	std::cout << a << " < " << b << " ? "  << (a < b) << std::endl;
	std::cout << c << " < " << e << " ? "  << (c < e) << std::endl;
	std::cout << "=======================" << std::endl;
	std::cout << "Testing operator <=: " << std::endl;
	std::cout << a << " <= " << b << " ? "  << (a <= b) << std::endl;
	std::cout << c << " <= " << e << " ? "  << (c <= e) << std::endl;
	std::cout << "=======================" << std::endl;
	std::cout << "Testing operator ==: " << std::endl;
	std::cout << a << " == " << b << " ? "  << (a == b) << std::endl;
	std::cout << c << " == " << e << " ? "  << (c == e) << std::endl;
	std::cout << "=======================" << std::endl;
	std::cout << "Testing operator <=: " << std::endl;
	std::cout << a << " != " << b << " ? "  << (a != b) << std::endl;
	std::cout << c << " != " << e << " ? "  << (c != e) << std::endl;

	std::cout << "=======================" << std::endl;
	std::cout << "Testing min " << std::endl;
	std::cout << "Min bettween " << a << " and " << b << " : " << Fixed::min(a, b) << std::endl;
	std::cout << "Min bettween " << c << " and " << b << " : " << Fixed::min(c, b) << std::endl;

	std::cout << "=======================" << std::endl;
	std::cout << "Testing max " << std::endl;
	std::cout << "Max bettween " << a << " and " << b << " : " << Fixed::max(a, b) << std::endl;
	std::cout << "Max bettween " << c << " and " << b << " : " << Fixed::max(c, b) << std::endl;
	return 0;
}
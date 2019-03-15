#include "Fixed.class.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed(void):_fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &other)
{
	*this = other;
	std::cout << "Copy constructor called" << std::endl;
	return ;
}

Fixed&  Fixed::operator=(Fixed const &other)
{
	std::cout << "Assination operator called" << std::endl;
	this->_fixedPoint = other.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedPoint;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedPoint = raw;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}
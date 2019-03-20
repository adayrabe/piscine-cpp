#include "Fixed.class.hpp"

const int Fixed::_fractionalBits = 8;

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

Fixed::Fixed(int const num)
{
	std::cout << "Int constructor called" << std::endl;
	_fixedPoint = num << this->_fractionalBits;
	return ;
}

Fixed::Fixed (float const num)
{
	std::cout << "Float constructor called" << std::endl;
	_fixedPoint = roundf(num * (1 << this->_fractionalBits));
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
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

float Fixed::toFloat(void) const
{
	return ((float)this->_fixedPoint /
		(float)(1 <<  this->_fractionalBits));
}

int Fixed::toInt(void) const
{
	return this->_fixedPoint >> this->_fractionalBits;
}

std::ostream& operator<<(std::ostream &o, Fixed const &num)
{
	o << num.toFloat();
	return o;
}

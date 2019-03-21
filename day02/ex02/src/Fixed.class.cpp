#include "Fixed.class.hpp"

const int Fixed::_fractionalBits = 8;

Fixed::Fixed(void):_fixedPoint(0)
{
	return ;
}

Fixed::Fixed(Fixed const &other)
{
	*this = other;
	return ;
}

Fixed::Fixed(int const num)
{
	_fixedPoint = num << this->_fractionalBits;
	return ;
}

Fixed::Fixed (float const num)
{
	_fixedPoint = roundf(num * (1 << this->_fractionalBits));
	return ;
}

Fixed::~Fixed(void)
{
	return ;
}

Fixed&  Fixed::operator=(Fixed const &other)
{
	this->_fixedPoint = other.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	return this->_fixedPoint;
}

void Fixed::setRawBits(int const raw)
{
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

bool Fixed::operator>(Fixed const &other) const
{
	return (this->_fixedPoint > other.getRawBits());
}

bool Fixed::operator>=(Fixed const &other) const
{
	return (*this > other || *this == other);
}

bool Fixed::operator<(Fixed const &other) const
{
	return (this->_fixedPoint < other.getRawBits());
}

bool Fixed::operator<=(Fixed const &other) const
{
	return (*this < other || *this == other);
}

bool Fixed::operator==(Fixed const &other) const
{
	return (this->_fixedPoint == other.getRawBits());
}

bool Fixed::operator!=(Fixed const &other) const
{
	return !(*this == other); 
}

Fixed Fixed::operator+(Fixed const &other) const
{
		std::cout << this->toFloat() << " " <<  other.toFloat() << std::endl;

	std::cout << this->toFloat() + other.toFloat() << std::endl;
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(Fixed const &other) const
{
	return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator/(Fixed const &other) const
{
	if (other.toFloat() != 0)
		return Fixed(this->toFloat() / other.toFloat());
	else
	{
		std::cout << "Error - trying to divide by zero. \
Returning a default value" << std::endl;
		return Fixed(0);
	}
}

Fixed Fixed::operator*(Fixed const &other) const
{
	// std::cout << this->toFloat() << " " << other.toFloat() <<std::endl;
	// std::cout << this->toFloat() * other.toFloat() << std::endl;
	return Fixed(this->toFloat() * other.toFloat());
	// Fixed res;
	// res.setRawBits(this->_fixedPoint * other.getRawBits());
	// return res;
}

Fixed& Fixed::operator++()
{
	this->_fixedPoint++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp (*this);
	operator++();
	return (temp);
}

Fixed& Fixed::operator--()
{
	this->_fixedPoint--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temp (*this);
	operator--();
	return (temp);
}

std::ostream& operator<<(std::ostream &o, Fixed const &num)
{
	o << num.toFloat();
	return o;
}

Fixed& min(Fixed &first, Fixed &second)
{
	if (first.getRawBits() < second.getRawBits())
		return first;
	else
		return second;
}

Fixed const & min(Fixed const &first, Fixed const &second)
{
	if (first.getRawBits() < second.getRawBits())
		return first;
	else
		return second;
}

Fixed& max(Fixed &first, Fixed &second)
{
	if (first.getRawBits() > second.getRawBits())
		return first;
	else
		return second;
}

Fixed const & max(Fixed const &first, Fixed const &second)
{
	if (first.getRawBits() > second.getRawBits())
		return first;
	else
		return second;
}

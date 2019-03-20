#ifndef FIXEDCLASS_HPP
#define FIXEDCLASS_HPP
#include <iostream>
#include <cmath>

class Fixed
{
	public:

		Fixed(void);
		Fixed(Fixed const &other);
		Fixed(int const num);
		Fixed (float const num);
		~Fixed(void);
		Fixed&  operator=(Fixed const &other);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;

	private:

		int _fixedPoint;
		static const int _fractionalBits;
};

std::ostream& operator<<(std::ostream &o, Fixed const &num);

#endif
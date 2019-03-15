#ifndef FIXEDCLASS_HPP
#define FIXEDCLASS_HPP
#include <iostream>

class Fixed
{
	public:

		Fixed(void);
		Fixed(Fixed const &other);
		~Fixed(void);
		Fixed&  operator=(Fixed const &other);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		

	private:

		int _fixedPoint;
		static const int _bits;
};

#endif
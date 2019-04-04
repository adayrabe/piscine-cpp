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
		bool operator>(Fixed const &other) const;
		bool operator>=(Fixed const &other) const;
		bool operator<(Fixed const &other) const;
		bool operator<=(Fixed const &other) const;
		bool operator==(Fixed const &other) const;
		bool operator!=(Fixed const &other) const;
		Fixed operator+(Fixed const &other) const;
		Fixed operator-(Fixed const &other) const;
		Fixed operator/(Fixed const &other) const;
		Fixed operator*(Fixed const &other) const;
		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);
		static Fixed& min(Fixed &first, Fixed &second);
		static Fixed const & min(Fixed const &first, Fixed const &second);
		static Fixed& max(Fixed &first, Fixed &second);
		static Fixed const & max(Fixed const &first, Fixed const &second);

	private:

		int _fixedPoint;
		static const int _fractionalBits;
};

std::ostream& operator<<(std::ostream &o, Fixed const &num);


#endif
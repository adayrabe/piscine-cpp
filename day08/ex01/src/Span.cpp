//
// Created by Artem DAYRABEKOV on 2019-04-12.
//

#include "../inc/Span.hpp"

Span::Span()
{}

Span::Span(Span const &other)
{
	*this = other;
}

Span &Span::operator=(Span const &other)
{
	static_cast<void>(other);
	return *this;
}

Span::~Span()
{}

Span::Span(unsigned int n) : _n(n)
{}

void Span::addNumber(int num)
{
	if (_v.size() == _n)
		throw (VectorFullException());
	_v.push_back(num);
}

int Span::shortestSpan()
{
	if (_v.size() == 0 || _v.size() == 1)
		throw (NotEnoughElementsException());
	std::sort(_v.begin(), _v.end());
	int res = _v[1] - _v[0];

	for (std::vector<int>::const_iterator i = _v.begin() + 1; i != _v.end(); i++)
	{
		int now = *i;
		int prev = *(i - 1);
		if (now - prev < res)
			res = now - prev;
	}
	return res;
}

int Span::longestSpan()
{
	if (_v.size() == 0 || _v.size() == 1)
		throw (NotEnoughElementsException());
	int max = *(std::max_element(_v.begin(), _v.end()));
	int min = *(std::min_element(_v.begin(), _v.end()));

	return max - min;
}


Span::VectorFullException::VectorFullException(){}

Span::VectorFullException::VectorFullException(VectorFullException const &other)
{
    *this = other;
}

Span::VectorFullException & Span::VectorFullException::operator= (VectorFullException const &other)
{
	static_cast<void>(other);
    return *this;
}

Span::VectorFullException::~VectorFullException()throw(){}

const char *Span::VectorFullException::what() const throw()
{
    return "The amount of elements in the vector has reached its limits";
}

Span::NotEnoughElementsException::NotEnoughElementsException(){}

Span::NotEnoughElementsException::NotEnoughElementsException(NotEnoughElementsException const &other)
{
    *this = other;
}

//TODO: add correct variable assignments

Span::NotEnoughElementsException & Span::NotEnoughElementsException::operator= (NotEnoughElementsException const &other)
{
	static_cast<void>(other);
    return *this;
}

Span::NotEnoughElementsException::~NotEnoughElementsException()throw(){}

const char *Span::NotEnoughElementsException::what() const throw()
{
    return "There is not enough elements";
}

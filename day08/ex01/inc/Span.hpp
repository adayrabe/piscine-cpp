//
// Created by Artem DAYRABEKOV on 2019-04-12.
//

#ifndef EX01_SPAN_HPP
#define EX01_SPAN_HPP


#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
	private:
		Span();
		unsigned int _n;
		std::vector<int> _v;
	public:
		Span(unsigned int n);

		Span(Span const &other);

		Span &operator=(Span const &other);

		virtual ~Span();

		void addNumber(int num);

		int shortestSpan();
		int longestSpan();
		class VectorFullException
		{
			public:
				VectorFullException();

				VectorFullException(VectorFullException const &other);

				VectorFullException &operator=(VectorFullException const &other);

				virtual ~VectorFullException() throw();

				virtual const char *what() const throw();
		};

		class NotEnoughElementsException
		{
			public:
				NotEnoughElementsException();

				NotEnoughElementsException(NotEnoughElementsException const &other);

				NotEnoughElementsException &operator=(NotEnoughElementsException const &other);

				virtual ~NotEnoughElementsException() throw();

				virtual const char *what() const throw();
		};
};

#endif //EX01_SPAN_HPP

//
// Created by Artem DAYRABEKOV on 2019-04-12.
//

#include <iostream>

template <typename T>
class Array
{
	private:
		unsigned int	_n;
		T*				_arr;
	public:
		Array<T>():_n(0){_arr = new T[0];}

		Array<T>(unsigned int n) : _n(n)
		{
			_arr = new T[_n];
			for (size_t i = 0; i < _n; i++)
				_arr[i] = 0;
		}

		Array<T>(Array const &other) : _n(0), _arr(NULL){*this = other;}

		Array<T> &operator=(Array<T> const &other)
		{
			if (_arr)
				delete[] _arr;
			_n = other.size();
			_arr = new T[_n];
			for (size_t i = 0; i < _n; i++)
				_arr[i] = other[i];
			return *this;
		}

		virtual ~Array<T>(){delete[] _arr;}

		unsigned int size() const{return _n;}

		T operator[](unsigned int pos)const
		{
			if (pos >= _n)
				throw(IndexOutOfBoundException());
			return _arr[pos];
		}

		T& operator[](unsigned int pos)
		{
			if (pos >= _n)
				throw(IndexOutOfBoundException());
			return _arr[pos];
		}

	class IndexOutOfBoundException : public std::exception
		{
			public:
				IndexOutOfBoundException(){}

				IndexOutOfBoundException(IndexOutOfBoundException const &other){*this = other;}

				IndexOutOfBoundException &operator=(IndexOutOfBoundException const &other)
				{
					static_cast<void>(other);
					return *this;
				}

				virtual ~IndexOutOfBoundException() throw(){}

				virtual const char *what() const throw(){return "Error - index out of bound";}
		};

};

template <typename T>
std::ostream & operator<< (std::ostream &o, Array<T> &a)
{
	for (size_t i = 0; i < a.size(); i++)
		o << a[i] << " ";
	o << std::endl;
	return o;
}
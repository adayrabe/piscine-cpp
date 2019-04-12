
#include <iostream>

template <typename  T>
void swap(T  &a, T  &b)
{
	T temp = a;
	a = b;
	b = temp;
}

template <typename  T>
T const& min(T const &a, T const &b)
{
	return (a < b) ? a : b;
}

template <typename  T>
T const& max(T const &a, T const &b)
{
	return (a > b) ? a : b;
}

int main()
{
	{
		int a = 5;
		int b = 20;

		std::cout << "Test for int" << std::endl;
		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;

		std::cout << "Min: " << ::min(a, b) << std::endl;
		std::cout << "Max: " << ::max(a, b) << std::endl;
		std::cout << "Swaping..." << std::endl;
		::swap(a, b);
		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
	}
	{
		std::cout << "==================================================================" << std::endl;

		float a = -5.8;
		float b = 10.2;
		std::cout << "Test for float" << std::endl;
		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;

		std::cout << "Min: " << ::min(a, b) << std::endl;
		std::cout << "Max: " << ::max(a, b) << std::endl;
		std::cout << "Swaping..." << std::endl;
		swap(a, b);
		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
	}
	{
		std::cout << "==================================================================" << std::endl;

		std::string a = "Aaaa";
		std::string b = "Bbbb";
		std::cout << "Test for strings" << std::endl;
		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		std::cout << "Min: " << ::min(a, b) << std::endl;
		std::cout << "Max: " << ::max(a, b) << std::endl;

		std::cout << "Swaping..." << std::endl;
		swap(a, b);
		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
	}
	return 0;
}
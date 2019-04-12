
#include <iostream>

void increment(int &a)
{
	a++;
}

template <typename T>

void iter(T *arr, size_t length, void (*f)(T&))
{
	for (size_t i = 0; i < length; i++)
		f(arr[i]);
}

template <typename T>

void print_arr(T *arr, size_t length)
{
	for (size_t i = 0; i < length; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}


int main()
{
	int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	iter(arr, 10, increment);
	print_arr(arr, 10);

	return 0;
}

#include <iostream>
#include "../inc/easyfind.hpp"



int main() {

	std::list<int> lst;
	lst.push_back(2);
	lst.push_back(3);
	lst.push_back(6);
	lst.push_back(5);

	lst.push_back(12);
	lst.push_back(-1);
	lst.push_back(5);

 	int t = 5;
	std::cout << "Testing on list " << std::endl;
	print_container(lst);

	std::cout << "First occurence of " << t << " is on position: ";
	std::cout << easyfind(lst, t) << std::endl;

	t = -1;
	std::cout << "First occurence of " << t << " is on position: ";
	std::cout << easyfind(lst, t) << std::endl;
	std::cout << "Testing invalid option: " << std::endl;
	try
	{
		std::cout << easyfind(lst, 10) << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "The element is not in the list" << std::endl;
	}

	std::cout << "=========================================" << std::endl;
	std::cout << "Testing on vector " << std::endl;

	std::vector<int> vector;
	vector.push_back(21);
	vector.push_back(12);
	vector.push_back(6);
	vector.push_back(5);

	vector.push_back(12);
	vector.push_back(-1);
	vector.push_back(500);

	print_container(vector);
	t = 12;
	std::cout << "First occurence of " << t << " is on position: ";
	std::cout << easyfind(vector, t) << std::endl;

	t = 21;
	std::cout << "First occurence of " << t << " is on position: ";
	std::cout << easyfind(vector, t) << std::endl;
	std::cout << "Testing invalid option: " << std::endl;

	try
	{
		std::cout << easyfind(vector, 10) << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "The element is not in the list" << std::endl;
	}
	return 0;
}
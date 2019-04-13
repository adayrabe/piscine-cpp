
#include <iostream>
#include "MutantStack.hpp"
int main() {

	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "TOP: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size: " << mstack.size() << std::endl;
	mstack.push(3); mstack.push(5); mstack.push(737); //[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "Values:" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> temp;
	temp.push(1);
	temp.push(53);
	MutantStack<int> t(temp);
	return 0;
}
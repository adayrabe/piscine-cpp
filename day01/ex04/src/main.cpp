#include <iostream>

int main(void)
{
	std::string str  = "HI THIS IS BRAIN";
	std::string *pstr = &str;
	std::string &rstr = str;

	std::cout << "Pointer: " << *pstr << std::endl;
	std::cout << "Reference: " << rstr << std::endl;
	return (0);
}

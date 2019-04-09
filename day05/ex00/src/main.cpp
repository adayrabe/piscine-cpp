
#include "Bureaucrat.hpp"

int main() {

	std::cout << "Creating bureaucrat with the highest score" << std::endl;
	Bureaucrat temp1("Temp1", 1);
	std::cout << temp1;
	std::cout << "Incrementing..." << std::endl;
	temp1.increment();
	std::cout << temp1;

	std::cout << "===========================================" << std::endl;
	std::cout << "Creating bureaucrat with the highest score" << std::endl;
	Bureaucrat temp2("Temp2", 150);
	std::cout << temp2;
	std::cout << "Decrementing..." << std::endl;
	temp2.decrement();
	std::cout << temp2;

	std::cout << "===========================================" << std::endl;
	std::cout << "Creating bureaucrat with the score above highest" << std::endl;
	Bureaucrat temp3("Temp3", -1);
	std::cout << temp3;

	std::cout << "===========================================" << std::endl;
	std::cout << "Creating bureaucrat with the score below lowest" << std::endl;
	Bureaucrat temp4("Temp4", 160);
	std::cout << temp4;
	return 0;
}
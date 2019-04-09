
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {

	{
		std::cout << "Testing invalid forms" << std::endl;
		Form tempForm1(0, 12, "tempForm1");
		std::cout << tempForm1;
		Form tempForm2(12, 0, "tempForm2");
		std::cout << tempForm2;
		Form tempForm3(151, 12, "tempForm3");
		std::cout << tempForm3;
		Form tempForm4(1, 151, "tempForm4");
		std::cout << tempForm4;
	}
	{
		std::cout << "===========================================" << std::endl;
		std::cout << "Testing invalid signment" << std::endl;
		Form tempForm1(4, 12, "tempForm1");
		Bureaucrat tempBureaucrat1("tempBureaucrat1", 5);
		tempBureaucrat1.signForm(tempForm1);
	}
	{
		std::cout << "===========================================" << std::endl;
		std::cout << "Testing valid signment" << std::endl;
		Form tempForm1(7, 12, "tempForm1");
		Bureaucrat tempBureaucrat1("tempBureaucrat1", 5);
		tempBureaucrat1.signForm(tempForm1);
	}

	return 0;
}
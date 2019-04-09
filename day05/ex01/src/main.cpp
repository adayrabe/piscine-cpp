
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {

	try
	{
		std::cout << "Testing invalid forms" << std::endl;
		Form tempForm1(0, 155, "tempForm1");
		std::cout << tempForm1;
	}
	catch (Form::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Form tempForm1(12, 0, "tempForm1");
		std::cout << tempForm1;
	}
	catch (Form::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Form tempForm1(155, 0, "tempForm1");
		std::cout << tempForm1;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Form tempForm1(1, 151, "tempForm1");
		std::cout << tempForm1;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
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

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main() {

	{
		std::cout<< "=======================================================" << std::endl;
		std::cout << "Bureaucrat that can not sign" << std::endl;
		Bureaucrat temp("Tom", 150);
		ShrubberyCreationForm a("Some");

		temp.signForm(a);
		temp.executeForm(a);
	}
	{
		std::cout<< "=======================================================" << std::endl;
		std::cout << "Bureaucrat that can not  execute" << std::endl;

		Bureaucrat temp("Tom", 140);
		ShrubberyCreationForm a("Some");

		temp.signForm(a);
		temp.executeForm(a);
	}
	{
		std::cout<< "=======================================================" << std::endl;
		std::cout << "Form is not signed" << std::endl;
		Bureaucrat temp("Tom", 20);
		ShrubberyCreationForm a("Some");

		temp.executeForm(a);
	}
	{
		std::cout<< "=======================================================" << std::endl;
		std::cout << "Success tests:" << std::endl;

		Bureaucrat temp("Tom", 1);
		ShrubberyCreationForm a("Some1");

		temp.signForm(a);
		temp.executeForm(a);

		RobotomyRequestForm b("Some2");
		temp.signForm(b);
		temp.executeForm(b);

		PresidentialPardonForm c("Some3");
		temp.signForm(c);
		temp.executeForm(c);

	}
	return 0;
}
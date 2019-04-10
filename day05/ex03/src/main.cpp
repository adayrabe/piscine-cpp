
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main() {

	Intern some;
	Form *t;
	std::cout << "Failed attempts:" << std::endl;
	some.makeForm("test", "target");
	some.makeForm("123", "target");

	std::cout << "===========================================================" << std::endl;
	std::cout << "Successfull attempts:" << std::endl;
	t = some.makeForm("Robotomy ReQuEst", "target");
	std::cout << *t;
	delete t;
	std::cout << "===========================================================" << std::endl;
	t = some.makeForm("Presidential pardon", "target");
	std::cout << *t;
	delete t;
	std::cout << "===========================================================" << std::endl;
	t = some.makeForm("shrubbery CREATION", "target");
	std::cout << *t;
	delete t;
	return 0;
}
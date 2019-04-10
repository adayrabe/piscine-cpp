//
// Created by Dayrabekov Artem on 2019-04-10.
//

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{}

Intern::Intern(Intern const &other)
{
	(void)other;
	*this = other;
}

Intern &Intern::operator=(Intern const &other)
{
	(void)other;
	return *this;
}

Intern::~Intern()
{}

Form* Intern::makeForm(std::string name, std::string target)
{
	for (size_t i = 0; i <	name.length(); ++i)
	{
		name[i] = tolower(name[i]);
	}
	if (name == "shrubbery creation")
	{
		std::cout << "Intern creates " << name << std::endl;
		return new ShrubberyCreationForm(target);
	}
	if (name == "robotomy request")
	{
		std::cout << "Intern creates " << name << std::endl;
		return new RobotomyRequestForm(target);
	}
	if (name == "presidential pardon")
	{
		std::cout << "Intern creates " << name << std::endl;
		return new PresidentialPardonForm(target);
	}
	std::cout << "Intern failed to create " << name << std::endl;
	return NULL;
}

//
// Created by Dayrabekov Artem on 2019-04-09.
//

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form(145, 137, "Shrubbery Creation")
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other) : Form (other)
{
	*this = other;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
	Form::operator=(other);
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(145, 137, "Shrubbery Creation", target)
{

}

void ShrubberyCreationForm::action() const
{
	std::cout << "Making a tree..." << std::endl;
}

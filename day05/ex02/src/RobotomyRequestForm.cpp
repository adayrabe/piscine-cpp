//
// Created by Dayrabekov Artem on 2019-04-09.
//

#include "RobotomyRequestForm.hpp"
#include <fstream>

RobotomyRequestForm::RobotomyRequestForm() : Form(72, 45, "robotomy request")
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other) : Form(other)
{
	*this = other;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
{
	Form::operator=(other);
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

void RobotomyRequestForm::action() const
{
	std::ifstream ifs("/dev/random");
	unsigned char i;

	ifs >> i;
	ifs.close();
	i %= 2;
	if (i == 1)
		std::cout << getTarget() << " has been robotomized" << std::endl;
	else
		std::cout << getTarget() << " has failed to be robotomized" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(72, 45, "robotomy request", target)
{

}

//
// Created by Dayrabekov Artem on 2019-04-09.
//

#include "Bureaucrat.hpp"

int Bureaucrat:: _highest = 1;
int Bureaucrat:: _lowest = 150;

Bureaucrat::Bureaucrat(){}

Bureaucrat::Bureaucrat(Bureaucrat const &other) :_name(other.getName()), _grade(other.getGrade())
{

}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name), _grade(grade)
{

	if (_grade < _highest)
		throw GradeTooHighException();
	if (_grade > _lowest)
		throw GradeTooLowException();

}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other)
{
	_grade = other.getGrade();
    return *this;
}

Bureaucrat::~Bureaucrat(){}

const std::string &Bureaucrat::getName() const
{
	return _name;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::increment()
{

	if (_grade == _highest)
		throw GradeTooHighException();
	_grade--;

}

void Bureaucrat::decrement()
{
	if (_grade == _lowest)
		throw GradeTooLowException();
	_grade++;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(){}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const &other)
{
    *this = other;
}

Bureaucrat::GradeTooHighException & Bureaucrat::GradeTooHighException::operator= (GradeTooHighException const &other)
{
	(void)other;
	return *this;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw(){}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}


Bureaucrat::GradeTooLowException::GradeTooLowException(){}

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const &other)
{
    *this = other;
}

Bureaucrat::GradeTooLowException & Bureaucrat::GradeTooLowException::operator= (GradeTooLowException const &other)
{
	(void)other;
    return *this;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw(){}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade: " << bureaucrat.getGrade() << std::endl;
	return os;
}

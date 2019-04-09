//
// Created by Dayrabekov Artem on 2019-04-09.
//

#include "Form.hpp"
#include <iostream>
#include <Form.hpp>


int Form::_highest = 1;
int Form::_lowest = 150;

Form::Form() : _gradeSign(1), _gradeExecute(1), _name("undefined"), _signed(false)
{}

Form::Form(const int gradeSign, const int gradeExecute, std::string name) : _gradeSign(gradeSign),
																			_gradeExecute(gradeExecute),
																			_name(name)
{
	try
	{
		if (_gradeSign < _highest)
		{
			throw GradeTooHighException("Sign ");
		}
		if (_gradeSign > _lowest)
		{
			throw GradeTooLowException("Sign ");
		}
		if (_gradeExecute < _highest)
			throw GradeTooHighException("Execute ");
		if (_gradeExecute > _lowest)
			throw GradeTooLowException("Execute ");

	}
	catch (GradeTooHighException &e)
	{
		std::cerr << e.getMessage() << e.what() << std::endl;
	}
	catch (GradeTooLowException &e)
	{
		std::cerr << e.getMessage() << e.what() << std::endl;
	}
}

Form::Form(Form const &other) : _gradeSign(other.getGradeSign()),
								_gradeExecute(other.getGradeExecute()),
								_name(other.getName()),
								_signed(other.isASigned())
{

}

Form &Form::operator=(Form const &other)
{
	_signed = other.isASigned();
	return *this;
}

Form::~Form()
{}

int Form::getGradeSign() const
{
	return _gradeSign;
}

int Form::getGradeExecute() const
{
	return _gradeExecute;
}

bool Form::isASigned() const
{
	return _signed;
}

const std::string &Form::getName() const
{
	return _name;
}

void Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() > _gradeSign)
		throw GradeTooLowException();
	_signed = true;

}

Form::GradeTooHighException::GradeTooHighException(){}

Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const &other)
{
	*this = other;
}

Form::GradeTooHighException & Form::GradeTooHighException::operator= (GradeTooHighException const &other)
{
	(void)other;
	return *this;
}

Form::GradeTooHighException::~GradeTooHighException() throw(){}

const char *Form::GradeTooHighException::what() const throw()
{
	return "grade is too high";
}

const std::string &Form::GradeTooHighException::getMessage() const
{
	return _message;
}

Form::GradeTooHighException::GradeTooHighException(const std::string &message) : _message(message)
{}


Form::GradeTooLowException::GradeTooLowException(){}

Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const &other)
{
	*this = other;
}

Form::GradeTooLowException & Form::GradeTooLowException::operator= (GradeTooLowException const &other)
{
	(void)other;
	return *this;
}

Form::GradeTooLowException::~GradeTooLowException() throw(){}

const char *Form::GradeTooLowException::what() const throw()
{
	return "grade is too low";
}

const std::string &Form::GradeTooLowException::getMessage() const
{
	return _message;
}

Form::GradeTooLowException::GradeTooLowException(const std::string &message) : _message(message)
{}

std::ostream &operator<<(std::ostream &os, const Form &form)
{
	os << "Name: " << form.getName();
	if (form.isASigned())
		std::cout << ", is signed";
	else
		std::cout << ", is unsigned";
	std::cout << ", grade to be signed: " << form.getGradeSign() <<
	", grade to be executed: " << form.getGradeExecute() << std::endl;
	return os;
}
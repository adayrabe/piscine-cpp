//
// Created by Dayrabekov Artem on 2019-04-10.
//

#include <OfficeBlock.hpp>

#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock() : _intern(NULL), _signer(NULL), _executor(NULL)
{}

OfficeBlock::OfficeBlock(OfficeBlock const &other)
{
	*this = other;
}

OfficeBlock &OfficeBlock::operator=(OfficeBlock const &other)
{
	(void)other;
	return *this;
}

OfficeBlock::~OfficeBlock()
{}

OfficeBlock::OfficeBlock(Intern *intern, Bureaucrat *signing, Bureaucrat *executing) : _intern(intern),
																					   _signer(signing),
																					   _executor(executing)
{}

void OfficeBlock::setIntern(Intern &intern)
{
	_intern = &intern;
}

void OfficeBlock::setSigner(Bureaucrat &signer)
{
	_signer = &signer;
}

void OfficeBlock::setExecutor(Bureaucrat &executor)
{
	_executor = &executor;
}

void OfficeBlock::doBureaucracy(std::string formName, std::string targetName)
{
	if (!_intern)
		throw NoInternException();
	if (!_signer)
		throw NoSignerException();
	if (!_executor)
		throw NoExecutorException();
	Form *form = _intern->makeForm(formName, targetName);
	if (!form)
		throw WrongFormNameException();
	try
	{
		_signer->signForm(*form);
	}
	catch (Form::GradeTooLowException &e)
	{
		delete form;
		throw SignerGradeTooLowException();
	}
	try
	{
		_executor->executeForm(*form);
	}
	catch(Form::GradeTooLowException &e)
	{
		delete form;
		throw ExecutorGradeTooLowException();
	}
	catch(Form::FormNotSignedException &e)
	{
		delete form;
		throw Form::FormNotSignedException();
	}
	delete form;
}

OfficeBlock::NoInternException::NoInternException(){}

OfficeBlock::NoInternException::NoInternException(NoInternException const &other)
{
    *this = other;
}

OfficeBlock::NoInternException & OfficeBlock::NoInternException::operator= (NoInternException const &other)
{
	(void)other;
    return *this;
}

OfficeBlock::NoInternException::~NoInternException()throw(){}

const char *OfficeBlock::NoInternException::what() const throw()
{
    return "No intern available";
}

OfficeBlock::NoSignerException::NoSignerException(){}

OfficeBlock::NoSignerException::NoSignerException(NoSignerException const &other)
{
    *this = other;
}

OfficeBlock::NoSignerException & OfficeBlock::NoSignerException::operator= (NoSignerException const &other)
{
    (void)other;
    return *this;
}

OfficeBlock::NoSignerException::~NoSignerException()throw(){}

const char *OfficeBlock::NoSignerException::what() const throw()
{
    return "No bureaucrat to sign";
}

OfficeBlock::NoExecutorException::NoExecutorException(){}

OfficeBlock::NoExecutorException::NoExecutorException(NoExecutorException const &other)
{
    *this = other;
}

//TODO: add correct variable assignments

OfficeBlock::NoExecutorException & OfficeBlock::NoExecutorException::operator= (NoExecutorException const &other)
{
    (void)other;
    return *this;
}

OfficeBlock::NoExecutorException::~NoExecutorException()throw(){}

const char *OfficeBlock::NoExecutorException::what() const throw()
{
    return "No bureaucrat to execute";
}

OfficeBlock::WrongFormNameException::WrongFormNameException(){}

OfficeBlock::WrongFormNameException::WrongFormNameException(WrongFormNameException const &other)
{
	*this = other;
}

//TODO: add correct variable assignments

OfficeBlock::WrongFormNameException & OfficeBlock::WrongFormNameException::operator= (WrongFormNameException const &other)
{
	(void)other;
	return *this;
}

OfficeBlock::WrongFormNameException::~WrongFormNameException()throw(){}

const char *OfficeBlock::WrongFormNameException::what() const throw()
{
	return "The name of the form is wrong";
}

OfficeBlock::SignerGradeTooLowException::SignerGradeTooLowException(){}

OfficeBlock::SignerGradeTooLowException::SignerGradeTooLowException(SignerGradeTooLowException const &other)
{
    *this = other;
}

//TODO: add correct variable assignments

OfficeBlock::SignerGradeTooLowException & OfficeBlock::SignerGradeTooLowException::operator=
(SignerGradeTooLowException const &other)
{
    (void)other;
    return *this;
}

OfficeBlock::SignerGradeTooLowException::~SignerGradeTooLowException()throw(){}

const char *OfficeBlock::SignerGradeTooLowException::what() const throw()
{
    return "The grade of signer is too low";
}

OfficeBlock::ExecutorGradeTooLowException::ExecutorGradeTooLowException()
{}

OfficeBlock::ExecutorGradeTooLowException::ExecutorGradeTooLowException(ExecutorGradeTooLowException const &other)
{
    *this = other;
}

//TODO: add correct variable assignments

OfficeBlock::ExecutorGradeTooLowException & OfficeBlock::ExecutorGradeTooLowException::operator=
			(ExecutorGradeTooLowException const &other)
{
    (void)other;
    return *this;
}

OfficeBlock::ExecutorGradeTooLowException::~ExecutorGradeTooLowException()throw(){}

const char *OfficeBlock::ExecutorGradeTooLowException::what() const throw()
{
    return "The grade of executor is too low";
}

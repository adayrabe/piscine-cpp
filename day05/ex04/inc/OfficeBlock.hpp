//
// Created by Dayrabekov Artem on 2019-04-10.
//

#ifndef EX02_OFFICEBLOCK_HPP
#define EX02_OFFICEBLOCK_HPP


#include <iostream>
#include "Intern.hpp"
#include "Bureaucrat.hpp"

class OfficeBlock
{
	private:
		OfficeBlock(OfficeBlock const &other);
		OfficeBlock &operator=(OfficeBlock const &other);
		Intern		*_intern;
		Bureaucrat	*_signer;
		Bureaucrat	*_executor;
	public:

		OfficeBlock();

		OfficeBlock(Intern *intern, Bureaucrat *signing, Bureaucrat *executing);

		virtual ~OfficeBlock();

		void setIntern(Intern &intern);

		void setSigner(Bureaucrat &signer);

		void setExecutor(Bureaucrat &executor);

		void doBureaucracy(std::string form, std::string target);

		class NoInternException
		{
			public:
				NoInternException();

				NoInternException(NoInternException const &other);

				NoInternException &operator=(NoInternException const &other);

				virtual ~NoInternException() throw();

				virtual const char *what() const throw();
		};

		class NoSignerException
		{
			public:
				NoSignerException();

				NoSignerException(NoSignerException const &other);

				NoSignerException &operator=(NoSignerException const &other);

				virtual ~NoSignerException() throw();

				virtual const char *what() const throw();
		};

		class NoExecutorException
		{
			public:
				NoExecutorException();

				NoExecutorException(NoExecutorException const &other);

				NoExecutorException &operator=(NoExecutorException const &other);

				virtual ~NoExecutorException() throw();

				virtual const char *what() const throw();
		};

		class WrongFormNameException
		{
			public:
				WrongFormNameException();

				WrongFormNameException(WrongFormNameException const &other);

				WrongFormNameException &operator=(WrongFormNameException const &other);

				virtual ~WrongFormNameException() throw();

				virtual const char *what() const throw();
		};

		class SignerGradeTooLowException
		{
			public:
				SignerGradeTooLowException();

				SignerGradeTooLowException(SignerGradeTooLowException const &other);

				SignerGradeTooLowException &operator=(SignerGradeTooLowException const &other);

				virtual ~SignerGradeTooLowException() throw();

				virtual const char *what() const throw();
		};

		class ExecutorGradeTooLowException
		{
			public:
				ExecutorGradeTooLowException();

				ExecutorGradeTooLowException(ExecutorGradeTooLowException const &other);

				ExecutorGradeTooLowException &operator=(ExecutorGradeTooLowException const &other);

				virtual ~ExecutorGradeTooLowException() throw();

				virtual const char *what() const throw();
		};
};


#endif //EX02_OFFICEBLOCK_HPP

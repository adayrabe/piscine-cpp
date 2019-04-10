//
// Created by Dayrabekov Artem on 2019-04-09.
//

#ifndef EX00_BUREAUCRAT_HPP
#define EX00_BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Bureaucrat
{
	private:
		Bureaucrat();
	protected:
		std::string const	_name;
		int					_grade;
		static int			_highest;
		static int			_lowest;
	public:

		class GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException();
				GradeTooHighException(GradeTooHighException const &other);
				GradeTooHighException &operator=(GradeTooHighException const &other);

				virtual ~GradeTooHighException() throw();

				virtual const char* what() const throw();
		};

		class GradeTooLowException
		{
			public:
				GradeTooLowException();

				GradeTooLowException(GradeTooLowException const &other);

				GradeTooLowException &operator=(GradeTooLowException const &other);

				virtual ~GradeTooLowException() throw();
				virtual const char* what() const throw();
		};
        Bureaucrat(Bureaucrat const &other);
		Bureaucrat(const std::string &name, int grade);


		Bureaucrat &operator=(Bureaucrat const &other);
		virtual ~Bureaucrat();
		const std::string &getName() const;
		int getGrade() const;


		void increment();
		void decrement();

		void signForm(Form &form);
		void executeForm(Form const & form);
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif //EX00_BUREAUCRAT_HPP

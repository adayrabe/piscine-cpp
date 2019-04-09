//
// Created by Dayrabekov Artem on 2019-04-09.
//

#ifndef EX01_FORM_HPP
#define EX01_FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
	private:
		const int			_gradeSign;
		const int			_gradeExecute;
		std::string const	_name;
		bool				_signed;
		static int			_highest;
		static int			_lowest;
		Form();
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

		Form(const int gradeSign, const int gradeExecute, std::string name);

		Form(Form const &other);

		Form &operator=(Form const &other);

		virtual ~Form();

		int getGradeSign() const;

		const std::string &getName() const;

		int getGradeExecute() const;

		bool isASigned() const;

		void beSigned(Bureaucrat const& bureaucrat);
};

std::ostream &operator<<(std::ostream &os, const Form &form);


#endif //EX01_FORM_HPP

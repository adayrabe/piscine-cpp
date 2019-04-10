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
		std::string 		_target;
		static int			_highest;
		static int			_lowest;
		Form();
	public:

		class GradeTooHighException : public std::exception
		{
			private:
				std::string _message;
			public:
				GradeTooHighException();

				GradeTooHighException(const std::string &message);

				GradeTooHighException(GradeTooHighException const &other);
				GradeTooHighException &operator=(GradeTooHighException const &other);

				virtual ~GradeTooHighException() throw();

				virtual const char* what() const throw();

				const std::string &getMessage() const;
		};

		class GradeTooLowException
		{
			private:
				std::string _message;
			public:
				GradeTooLowException();

				GradeTooLowException(const std::string &message);

				GradeTooLowException(GradeTooLowException const &other);

				GradeTooLowException &operator=(GradeTooLowException const &other);

				virtual ~GradeTooLowException() throw();
				virtual const char* what() const throw();

				const std::string &getMessage() const;


		};

	class FormNotSignedException : public std::exception
		{
			public:
				FormNotSignedException();

				FormNotSignedException(FormNotSignedException const &other);

				FormNotSignedException &operator=(FormNotSignedException const &other);

				virtual ~FormNotSignedException() throw();
				virtual const char* what() const throw();

	};

		Form(const int gradeSign, const int gradeExecute, std::string name);

		Form(const int gradeSign, const int gradeExecute, const std::string &name, const std::string &target);

		Form(Form const &other);

		Form &operator=(Form const &other);

		virtual ~Form();

		int getGradeSign() const;

		const std::string &getName() const;

		int getGradeExecute() const;

		const std::string &getTarget() const;

		bool isASigned() const;

		void beSigned(Bureaucrat const &bureaucrat);
		virtual void action() const = 0;
		void execute(Bureaucrat const & executor) const;
};

std::ostream &operator<<(std::ostream &os, const Form &form);


#endif //EX01_FORM_HPP
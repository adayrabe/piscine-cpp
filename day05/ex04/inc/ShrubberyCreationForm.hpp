//
// Created by Dayrabekov Artem on 2019-04-09.
//

#ifndef EX02_SHRUBBERYCREATIONFORM_HPP
#define EX02_SHRUBBERYCREATIONFORM_HPP


#include <iostream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		ShrubberyCreationForm();
	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &other);

		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &other);

		virtual ~ShrubberyCreationForm();

		void action() const;
};


#endif //EX02_SHRUBBERYCREATIONFORM_HPP

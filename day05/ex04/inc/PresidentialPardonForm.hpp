//
// Created by Dayrabekov Artem on 2019-04-09.
//

#ifndef EX02_PRESIDENTIALPARDONFORM_HPP
#define EX02_PRESIDENTIALPARDONFORM_HPP


#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		PresidentialPardonForm();
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const &other);

		PresidentialPardonForm &operator=(PresidentialPardonForm const &other);

		virtual ~PresidentialPardonForm();
		void action() const;

};


#endif //EX02_PRESIDENTIALPARDONFORM_HPP

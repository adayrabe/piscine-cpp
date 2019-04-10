//
// Created by Dayrabekov Artem on 2019-04-09.
//

#ifndef EX02_ROBOTOMYREQUESTFORM_HPP
#define EX02_ROBOTOMYREQUESTFORM_HPP


#include <iostream>
#include "Form.hpp"
class RobotomyRequestForm : public Form
{
	private:
		RobotomyRequestForm();
	public:
		RobotomyRequestForm(std::string target);

		RobotomyRequestForm(RobotomyRequestForm const &other);

		RobotomyRequestForm &operator=(RobotomyRequestForm const &other);

		virtual ~RobotomyRequestForm();

		void action() const;
};


#endif //EX02_ROBOTOMYREQUESTFORM_HPP

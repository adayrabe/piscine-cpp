//
// Created by Dayrabekov Artem on 2019-04-10.
//

#ifndef EX02_INTERN_HPP
#define EX02_INTERN_HPP


#include <iostream>
#include "Form.hpp"

class Intern
{
	public:
		Intern();

		Intern(Intern const &other);

		Intern &operator=(Intern const &other);

		virtual ~Intern();
		Form* makeForm(std::string name, std::string target);
};


#endif //EX02_INTERN_HPP

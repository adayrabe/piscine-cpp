#include "Pony.hpp"

Pony::Pony(void)
{
	std::cout << "A pony has been created" << std::endl;
	return ;
}

Pony::Pony(std::string name, int age, std::string color):
			_name(name), _age(age), _color(color)
{
	std::cout << "A pony has been created" << std::endl;
	return ;
}

Pony::~Pony()
{
	std::cout << "A pony has been destroyed" << std::endl;
	return ;
}

std::string Pony::getName(void) const
{
	return (this->_name);
}

int Pony::getAge(void) const
{
	return (this->_age);
}

std::string Pony::getColor(void) const
{
	return (this->_color);
}

void Pony::talk(void) const
{
	std::cout << "My name is " << this->_name << std::endl;
	std::cout << "I am " << this->_age << " years old" << std::endl;
	std::cout << "My color is " << this->_color << std::endl;
}

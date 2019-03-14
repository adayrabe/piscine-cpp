#include "Weapon.hpp"

Weapon::Weapon(void)
{
	std::cout << "A weapon has been created" << std::endl;
	return ;
}

Weapon::Weapon(std::string type) : _type(type)
{
	std::cout << "A weapon has been created" << std::endl;
	return ;
}

Weapon::~Weapon(void)
{
	std::cout << "A weapon has been deleted" << std::endl;
	return ;
}

const std::string& Weapon::getType(void) const
{
	return (this->_type);
}

void Weapon::setType(std::string type)
{
	this->_type = type;
	return ;
}
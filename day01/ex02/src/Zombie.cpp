#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "A zombie has been created" << std::endl;
	return ;
}
Zombie::Zombie(std::string type, std::string name): _type(type), _name(name)
{
	std::cout << "A zombie has been created" << std::endl;
	return ;
}
Zombie::~Zombie(void)
{
	std::cout << "A zombie has been created" << std::endl;
	return ;
}
void Zombie::announce(void)
{
	std::cout << "<" << this->_name << " (" << this->_type;
	std::cout << ")> Braiiiiiiiins" << std::endl;
	return ;
}
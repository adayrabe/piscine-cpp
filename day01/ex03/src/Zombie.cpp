#include "Zombie.hpp"

Zombie::Zombie(void)
{
	unsigned char i;
	std::ifstream ifs("/dev/random");

	ifs >> i;
	ifs.close();
	std::string names[] = {"Jennifer", "Rose", "James", "Huston", "Tirion", "John", "Sansa", "Jimmy",
			"Jayme", "Harry", "Ron", "Dumbledore"};
	i = i % (sizeof(names) / sizeof(std::string));
	this->_name = names[i];
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
	std::cout << "A zombie has been destroyed" << std::endl;
	return ;
}
void Zombie::announce(void) const
{
	std::cout << "<" << this->_name << " (";
	if (!(this->_type).empty())
		std::cout << this->_type;
	else
		std::cout << "no_type";
	std::cout << ")> Braiiiiiiiins" << std::endl;
	return ;
}
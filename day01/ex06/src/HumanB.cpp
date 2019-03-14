#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name)
{
	std::cout << "A HumanB has been created" << std::endl;
	return ;
}

HumanB::~HumanB(void)
{
	std::cout << "A HumanB has been destroyed" << std::endl;
	return ;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
	return ;
}

void HumanB::attack(void)
{
	if (this->_weapon)
		std::cout << this->_name << "attacks with his " << (this->_weapon)->getType() << std::endl;
	return ;
}

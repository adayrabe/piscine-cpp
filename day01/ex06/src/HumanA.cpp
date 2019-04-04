#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon)
{
	std::cout << "A humanA has been created" << std::endl;
	return ;
}

HumanA::~HumanA(void)
{
	std::cout << "A humanA has been destroyed" << std::endl;
	return ;
}

void HumanA::attack(void)
{
	std::cout << this->_name << " attacks with his " << (this->_weapon).getType() << std::endl;
	return ;
}

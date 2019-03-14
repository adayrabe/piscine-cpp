#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{
	std::cout << "A zombie event has been created" << std::endl;
	return ;
}

ZombieEvent::~ZombieEvent(void)
{
	std::cout << "A zombie event has been destroyed" << std::endl;
	return ;
}

void ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
	Zombie *newZombie = new Zombie(this->_type, name);
	return (newZombie);
}

void ZombieEvent::randomChump(void)
{
	std::string name = "Hello";
	Zombie newZombie = Zombie(this->_type, name);
	newZombie.announce();
}
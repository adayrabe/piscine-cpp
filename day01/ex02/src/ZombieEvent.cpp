#include "ZombieEvent.hpp"
#include <fstream>

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

Zombie* ZombieEvent::newZombie(std::string name) const
{
	Zombie *newZombie = new Zombie(this->_type, name);
	return (newZombie);
}

void ZombieEvent::randomChump(void) const
{
	unsigned char i;
	std::ifstream ifs("/dev/random");

	ifs >> i;
	ifs.close();
	std::string names[] = {"Jennifer", "Rose", "James", "Huston", "Tirion", "John", "Sansa", "Jimmy",
			"Jayme", "Harry", "Ron", "Dumbledore"};
	i = i % (sizeof(names) / sizeof(std::string));
	std::string name = names[i];
	Zombie newZombie = Zombie(this->_type, name);
	newZombie.announce();
}

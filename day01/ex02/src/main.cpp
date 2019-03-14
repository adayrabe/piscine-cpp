#include "ZombieEvent.hpp"

int main()
{
	ZombieEvent zombieEvent = ZombieEvent();
	zombieEvent.setZombieType("Necro");

	Zombie *zombie1 = zombieEvent.newZombie("Alex");
	Zombie *zombie2 = zombieEvent.newZombie("Danny");

	zombieEvent.randomChump();

	zombie1->announce();
	zombie2->announce();
	delete zombie1;
	delete zombie2;
}
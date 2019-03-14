#include "ZombieEvent.hpp"

int main()
{
	ZombieEvent zombieEvent = ZombieEvent();
	ZombieEvent tempZombieEvent = ZombieEvent();
	zombieEvent.setZombieType("Necro");
	tempZombieEvent.setZombieType("Runner");

	Zombie *zombie1 = zombieEvent.newZombie("Alex");
	Zombie *zombie2 = zombieEvent.newZombie("Danny");

	zombieEvent.randomChump();
	tempZombieEvent.randomChump();

	zombie1->announce();
	zombie2->announce();
	delete zombie1;
	delete zombie2;
	return (0);
}
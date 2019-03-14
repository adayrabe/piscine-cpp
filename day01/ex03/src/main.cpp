#include "ZombieHorde.hpp"

int main()
{
	std::cout << "=============Zombie horde 1:==============" << std::endl;
	ZombieHorde zombieHorde1 = ZombieHorde(5);
	zombieHorde1.announce();

	std::cout << "=============Zombie horde 2:==============" << std::endl;
	ZombieHorde zombieHorde2 = ZombieHorde(10);
	zombieHorde2.announce();
	return (0);
}
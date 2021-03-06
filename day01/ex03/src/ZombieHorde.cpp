#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(void)
{
	std::cout << "A zombie horde has been created" << std::endl;
	return ;
}

ZombieHorde::ZombieHorde(int n):_amount(n)
{
	if (n < 0)
	{
		std::cout << "Error - amount should be a non-negative integer" << std::endl;
		return ;
	}
	this->_zombies = new Zombie[n];
	std::cout << "A zombie horde has been created" << std::endl;
	return ;
}

ZombieHorde::~ZombieHorde()
{
	delete [] this->_zombies;
	std::cout << "A zombie horde has been destroyed" << std::endl;
	return ;
}

void ZombieHorde::announce(void) const
{
	for (int i = 0; i < this->_amount; i++)
		this->_zombies[i].announce();
}
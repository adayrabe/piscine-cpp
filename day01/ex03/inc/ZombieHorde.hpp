#ifndef ZOMBIEHORDE_CPP
#define ZOMBIEHORDE_CPP
#include "Zombie.hpp"

class ZombieHorde
{
	public:

		ZombieHorde(void);
		ZombieHorde(int n);
		~ZombieHorde();
		void announce(void) const;

	private:
		int _amount;
		Zombie* _zombies;
};

#endif

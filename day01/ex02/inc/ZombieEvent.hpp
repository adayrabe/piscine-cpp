#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP
#include "Zombie.hpp"

class ZombieEvent
{
	public:
		ZombieEvent(void);
		~ZombieEvent(void);
		void setZombieType(std::string);
		Zombie *newZombie(std::string name) const;
		void randomChump(void) const;
	private:
		std::string _type;
};

#endif
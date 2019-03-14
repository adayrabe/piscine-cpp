#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>

class Zombie
{
	public:
		Zombie(void);
		Zombie(std::string type, std::string name);
		~Zombie(void);
		void announce(void) const;

	private:
		std::string _type;
		std::string _name;
};

#endif

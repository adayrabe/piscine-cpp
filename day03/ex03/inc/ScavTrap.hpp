#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <fstream>
#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string const name);
		ScavTrap(ScavTrap const &other);
		ScavTrap& operator=(ScavTrap const &other);
		~ScavTrap(void);
		

		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const &target);
		void grenadeAttack(std::string const &target);
		void freezingAttack(std::string const &target);
		void fireAttack(std::string const &target);

		void challengeNewcomer();

private:
		ScavTrap(void);

};

#endif

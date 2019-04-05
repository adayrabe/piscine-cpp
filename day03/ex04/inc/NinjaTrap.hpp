#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include <iostream>
#include <fstream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
	public:
		NinjaTrap(std::string const name);
		NinjaTrap(NinjaTrap const &other);
		NinjaTrap& operator=(NinjaTrap const &other);
		~NinjaTrap(void);

		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const &target);
		void grenadeAttack(std::string const &target);
		void freezingAttack(std::string const &target);
		void fireAttack(std::string const &target);

		void ninjaShoebox(FragTrap const &target);
		void ninjaShoebox(NinjaTrap const &target);
		void ninjaShoebox(ScavTrap const &target);

protected:
		NinjaTrap(void);
};

#endif

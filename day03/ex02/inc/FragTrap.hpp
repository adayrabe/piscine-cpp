#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <fstream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(std::string const name);
		FragTrap(FragTrap const &other);
		FragTrap& operator=(FragTrap const &other);
		~FragTrap(void);

		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const &target);
		void grenadeAttack(std::string const &target);
		void freezingAttack(std::string const &target);
		void fireAttack(std::string const &target);

		void vaulthunter_dot_exe(std::string const & target);

private:
		FragTrap(void);
};

#endif

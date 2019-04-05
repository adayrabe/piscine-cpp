#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include <iostream>
#include <fstream>
#include "NinjaTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap
{
	public:
		SuperTrap(std::string const name);
		SuperTrap(SuperTrap const &other);
		SuperTrap& operator=(SuperTrap const &other);
		~SuperTrap(void);

		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const &target);
		void grenadeAttack(std::string const &target);
		void freezingAttack(std::string const &target);
		void fireAttack(std::string const &target);

protected:
		SuperTrap(void);
};

#endif
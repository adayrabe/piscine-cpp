#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>

class FragTrap
{
	public:
		FragTrap(std::string const name);
		FragTrap(FragTrap const &other);
		FragTrap& operator=(FragTrap const &other);
		~FragTrap(void);

		unsigned int getHitPoints(void) const;
        unsigned int getMaxHitPoints(void) const;
        unsigned int getEnergyPoints(void) const;
        unsigned int getMaxEnergyPoints(void) const;
        unsigned int getLevel(void) const;
        std::string getName(void) const;
        unsigned int getMeleeAttackDamage(void) const;
        unsigned int getRangedAttackDamage(void) const;
        unsigned int getArmorDamageReduction(void) const;

        void rangedAttack(std::string const &target);
        void meleeAttack(std::string const &target);
        void takeDamage(unsigned int amount);
        void beRepaired (unsigned int amount);

private:
        FragTrap(void);
        unsigned int _hitPoints;
		unsigned int _maxHitPoints;
		unsigned int _energyPoints;
		unsigned int _maxEnergyPoints;
		unsigned int _level;
		std::string _name;
		unsigned int _meleeAttackDamage;
		unsigned int _rangedAttackDamage;
		unsigned int _armorDamageReduction;
};

#endif

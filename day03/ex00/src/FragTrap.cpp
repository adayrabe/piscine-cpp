#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
    std::cout << "A default constructor called. It shouldn't have been called at all" << std::endl;
    return ;
}

FragTrap::FragTrap(std::string const name):_hitPoints(100), _maxHitPoints(100), _energyPoints(100),
_maxEnergyPoints(100), _level(1), _name(name), _meleeAttackDamage(30), _rangedAttackDamage(20),
_armorDamageReduction(5)
{
    std::cout << "" << std::endl;
}

FragTrap::FragTrap(FragTrap const &other)
{
    *this = other;
    std::cout << "" << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const &other)
{
    this->_hitPoints = other.getHitPoints();
    this->_maxHitPoints = other.getMaxHitPoints();
    this->_energyPoints = other.getEnergyPoints();
    this->_maxEnergyPoints = other.getMaxEnergyPoints();
    this->_level = other.getLevel();
    this->_name = other.getName();
    this->_meleeAttackDamage = other.getMeleeAttackDamage();
    this->_rangedAttackDamage = other.getRangedAttackDamage();
    this->_armorDamageReduction = other.getArmorDamageReduction();
    return  *this;
}

FragTrap::~FragTrap(void)
{
    std::cout << "" << std::endl;
}

unsigned int FragTrap::getHitPoints(void) const
{
    return this->_hitPoints;
}

unsigned int FragTrap::getMaxHitPoints(void) const
{
    return this->_maxHitPoints;
}

unsigned int FragTrap::getEnergyPoints(void) const
{
    return this->_energyPoints;
}

unsigned int FragTrap::getMaxEnergyPoints(void) const
{
    return this->_maxEnergyPoints;
}

unsigned int FragTrap::getLevel(void) const
{
    return this->_level;
}

std::string FragTrap::getName(void) const
{
    return this->_name;
}

unsigned int FragTrap::getMeleeAttackDamage(void) const
{
    return this->_meleeAttackDamage;
}

unsigned int FragTrap::getRangedAttackDamage(void) const
{
    return this->_rangedAttackDamage;
}

unsigned int FragTrap::getArmorDamageReduction(void) const
{
    return (this->_armorDamageReduction);
}

void FragTrap::rangedAttack(std::string const &target)
{
    std::cout << "FR4G-TP " << this->_name << " attacks " << target <<
    " at range, causing " << this->_rangedAttackDamage << " points of damage!" << std::endl;
    return ;
}

void FragTrap::meleeAttack(std::string const &target)
{
    std::cout << "FR4G-TP " << this->_name << " attacks " << target <<
    " at melee, causing " << this->_meleeAttackDamage << " points of damage!" << std::endl;
    return ;
}

void FragTrap::takeDamage(unsigned int amount)
{
    if (amount >= this->_hitPoints + this->_armorDamageReduction)
    {
        std::cout << "OMG! FR4G-TP " << this->_name << "can't receive more damage! His amount of hitpoints is 0!" << std::endl;
        this->_hitPoints = 0;
        return ;
    }
    this->_hitPoints = this->_hitPoints + this->_armorDamageReduction - amount;
    std::cout << "FR4G-TP " << this->_name << " receives " << amount <<
    " of damage, current hitpoints are  " << this->_hitPoints << std::endl;
    return ;
}

void FragTrap::beRepaired(unsigned int amount)
{
    if (this->_hitPoints + amount >= this->_maxHitPoints)
    {
        std::cout << "FR4G-TP " << this->_name << " is now totally repaired" << std::endl;
        this->_hitPoints = this->_maxHitPoints;
        return ;
    }
    this->_hitPoints += amount;
    std::cout << "FR4G-TP " << this->_name << "is repairing his hit points by " << amount <<
    "! His current hitpoints amount is " << this->_hitPoints << std::endl;
    return ;
}

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void)
{
    std::cout << "A default constructor called. It shouldn't have been called at all" << std::endl;
    return ;
}

SuperTrap::SuperTrap(std::string const name) : ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
    std::cout << "SUPER-TP " << this->_name << " is constructed with chosen name. " << std::endl;
    this->_hitPoints = FragTrap::_hitPoints;
    this->_maxHitPoints = FragTrap::_maxHitPoints;
    this->_energyPoints = NinjaTrap::_energyPoints;
    this->_maxEnergyPoints = NinjaTrap::_maxEnergyPoints;
    this->_level = 1;
    this->_meleeAttackDamage = NinjaTrap::_meleeAttackDamage;
    this->_rangedAttackDamage = FragTrap::_rangedAttackDamage;
    this->_grenadeDamage = FragTrap::_grenadeDamage;
    this->_coldDamage = NinjaTrap::_coldDamage;
    this->_fireDamage = FragTrap::_fireDamage;
    this->_armorDamageReduction = FragTrap::_armorDamageReduction;
    return ;
}

SuperTrap::SuperTrap(SuperTrap const &other)
{
    *this = other;
    std::cout << "SuperTrap " << this->_name << " is constructed from another SuperTrap! Together we will conquer the world!" << std::endl;
    return ;
}

SuperTrap& SuperTrap::operator=(SuperTrap const &other)
{
    this->_hitPoints = other.getHitPoints();
    this->_maxHitPoints = other.getMaxHitPoints();
    this->_energyPoints = other.getEnergyPoints();
    this->_maxEnergyPoints = other.getMaxEnergyPoints();
    this->_level = other.getLevel();
    this->_name = other.getName();
    this->_meleeAttackDamage = other.getMeleeAttackDamage();
    this->_rangedAttackDamage = other.getRangedAttackDamage();
    this->_grenadeDamage = other.getGrenadeDamage();
    this->_coldDamage = other.getColdDamage();
    this->_fireDamage = other.getFireDamage();
    this->_armorDamageReduction = other.getArmorDamageReduction();
    return  *this;
}

SuperTrap::~SuperTrap(void)
{
    std::cout << this->_name << " is joining his ancestors! let's just have a minute of silence" << std::endl;
    return ;
}


void SuperTrap::rangedAttack(std::string const &target)
{
    FragTrap::rangedAttack(target);
    return ;
}

void SuperTrap::meleeAttack(std::string const &target)
{
    NinjaTrap::meleeAttack(target);
    return ;
}

void SuperTrap::grenadeAttack(std::string const &target)
{
    FragTrap::grenadeAttack(target);
    return ;
}

void SuperTrap::freezingAttack(std::string const &target)
{
    NinjaTrap::freezingAttack(target);
    return ;
}

void SuperTrap::fireAttack(std::string const &target)
{
    FragTrap::fireAttack(target);
    return ;
}
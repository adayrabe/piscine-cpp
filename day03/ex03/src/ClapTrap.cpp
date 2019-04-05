#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    std::cout << "Claptrap's default constructor is called" << std::endl;
    return ;
}

ClapTrap::ClapTrap(std::string const name): _name(name)
{
    std::cout << "CL4P-TP " << this->_name << " is constructed with chosen name. Prepare to die!" << std::endl;
    return ;
}

ClapTrap::ClapTrap(ClapTrap const &other)
{
    *this = other;
    std::cout << "ClapTrap " << this->_name << " is constructed from another ClapTrap! Am I a clone or am I real?" << std::endl;
    return ;
}

ClapTrap& ClapTrap::operator=(ClapTrap const &other)
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

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap " << this->_name << " is no longer seen to be alive! RIP brother!" << std::endl;
    return ;
}

unsigned int ClapTrap::getHitPoints(void) const
{
    return this->_hitPoints;
}

unsigned int ClapTrap::getMaxHitPoints(void) const
{
    return this->_maxHitPoints;
}

unsigned int ClapTrap::getEnergyPoints(void) const
{
    return this->_energyPoints;
}

unsigned int ClapTrap::getMaxEnergyPoints(void) const
{
    return this->_maxEnergyPoints;
}

unsigned int ClapTrap::getLevel(void) const
{
    return this->_level;
}

std::string ClapTrap::getName(void) const
{
    return this->_name;
}

unsigned int ClapTrap::getMeleeAttackDamage(void) const
{
    return this->_meleeAttackDamage;
}

unsigned int ClapTrap::getRangedAttackDamage(void) const
{
    return this->_rangedAttackDamage;
}

unsigned int ClapTrap::getGrenadeDamage(void) const
{
    return this->_grenadeDamage;
}

unsigned int ClapTrap::getColdDamage(void) const
{
    return this->_coldDamage;
}

unsigned int ClapTrap::getFireDamage(void) const
{
    return this->_fireDamage;
}

unsigned int ClapTrap::getArmorDamageReduction(void) const
{
    return (this->_armorDamageReduction);
}

void ClapTrap::rangedAttack(std::string const &target)
{
    std::cout << this->_name << " attacks " << target <<
    " at range, causing " << this->_rangedAttackDamage << " points of damage!" << std::endl;
    return ;
}

void ClapTrap::meleeAttack(std::string const &target)
{
    std::cout << this->_name << " attacks " << target <<
    " at melee, causing " << this->_meleeAttackDamage << " points of damage!" << std::endl;
    return ;
}

void ClapTrap::grenadeAttack(std::string const &target)
{
    std::cout << this->_name << " attacks " << target <<
    " with a grenade, causing " << this->_grenadeDamage << " points of damage!" << std::endl;
    return ;
}

void ClapTrap::freezingAttack(std::string const &target)
{
    std::cout << this->_name << " attacks " << target <<
    " by freezing, causing " << this->_coldDamage << " points of damage!" << std::endl;
    return ;
}

void ClapTrap::fireAttack(std::string const &target)
{
    std::cout << this->_name << " attacks " << target <<
    " by fire, causing " << this->_fireDamage << " points of damage!" << std::endl;
    return ;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (amount >= this->_hitPoints + this->_armorDamageReduction)
    {
        std::cout << "OMG! I can't receive more damage! Need to get repaired, otherwise I will die!" << std::endl;
        std::cout << this->_name << " has 0 HP" << std::endl;
        this->_hitPoints = 0;
        return ;
    }
    this->_hitPoints = this->_hitPoints + this->_armorDamageReduction - amount;
    std::cout << this->_name << " receives " << amount <<
    " of damage, current hitpoints are  " << this->_hitPoints << std::endl;
    std::cout << "No matter how much you try, you will never kill me!" << std::endl;
    return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoints < ENERGY)
    {
        std::cout << this->_name << " has not enough energy points! Adding energy points" << std::endl;
        this->addEnergyPoints();
        return ;
    }
    if (this->_hitPoints + amount >= this->_maxHitPoints)
    {
        std::cout << this->_name << " is now totally repaired." <<std::endl;
        std::cout << "I will soon kill all the humans! He-he-he" << std::endl;
        this->_hitPoints = this->_maxHitPoints;
        return ;
    }
    this->_energyPoints -= ENERGY;
    this->_hitPoints += amount;
    std::cout << this->_name << " is repairing his hit points by " << amount <<
    "! His current hitpoints amount is " << this->_hitPoints << std::endl;
    std::cout << "I will live forever!" << std::endl;
    return ;
}

void ClapTrap::addEnergyPoints(void)
{
    if (this->_energyPoints + ENERGY >= this->_maxEnergyPoints)
    {
        std::cout << "Oh yeahh, I am full of energy now!!" << std::endl;
        this->_energyPoints = this->_maxEnergyPoints;
        return ;
    }
    std::cout << "Drinking redbull, I've heard it gives you wings" << std::endl;
    this->_energyPoints += ENERGY;
    return ;
}

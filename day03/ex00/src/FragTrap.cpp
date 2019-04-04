#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
    std::cout << "A default constructor called. It shouldn't have been called at all" << std::endl;
    return ;
}

FragTrap::FragTrap(std::string const name):_hitPoints(100), _maxHitPoints(100), _energyPoints(100),
_maxEnergyPoints(100), _level(1), _name(name), _meleeAttackDamage(30), _rangedAttackDamage(20), _grenadeDamage(35),
 _coldDamage(15), _fireDamage(45), _armorDamageReduction(5)
{
    std::cout << "FR4G-TP " << this->_name << " is constructed with chosen name. I like this name!" << std::endl;
    return ;
}

FragTrap::FragTrap(FragTrap const &other)
{
    *this = other;
    std::cout << "Fragtrap " << this->_name << " is constructed from another Fragtrap! How cool is that!" << std::endl;
    return ;
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
    this->_grenadeDamage = other.getGrenadeDamage();
    this->_coldDamage = other.getColdDamage();
    this->_fireDamage = other.getFireDamage();
    this->_armorDamageReduction = other.getArmorDamageReduction();
    return  *this;
}

FragTrap::~FragTrap(void)
{
    std::cout << "Oh nooooo! a FragTrap " << this->_name << " is dead!" << std::endl;
    return ;
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

unsigned int FragTrap::getGrenadeDamage(void) const
{
    return this->_grenadeDamage;
}

unsigned int FragTrap::getColdDamage(void) const
{
    return this->_coldDamage;
}

unsigned int FragTrap::getFireDamage(void) const
{
    return this->_fireDamage;
}

unsigned int FragTrap::getArmorDamageReduction(void) const
{
    return (this->_armorDamageReduction);
}

void FragTrap::rangedAttack(std::string const &target)
{
    std::cout << "Are you a pussy? Come closer!" << std::endl;
    std::cout << "FR4G-TP " << this->_name << " attacks " << target <<
    " at range, causing " << this->_rangedAttackDamage << " points of damage!" << std::endl;
    return ;
}

void FragTrap::meleeAttack(std::string const &target)
{
    std::cout << "Remember John Snow? Well, you will be stabbed now too!" << std::endl;
    std::cout << "FR4G-TP " << this->_name << " attacks " << target <<
    " at melee, causing " << this->_meleeAttackDamage << " points of damage!" << std::endl;
    return ;
}

void FragTrap::grenadeAttack(std::string const &target)
{
    std:: cout << "Present for you!" << std::endl;
    std::cout << "FR4G-TP " << this->_name << " attacks " << target <<
    " with a grenade, causing " << this->_grenadeDamage << " points of damage!" << std::endl;
    return ;
}

void FragTrap::freezingAttack(std::string const &target)
{
    std::cout << "Icely done." << std::endl;
    std::cout << "FR4G-TP " << this->_name << " attacks " << target <<
    " by freezing, causing " << this->_coldDamage << " points of damage!" << std::endl;
    return ;
}

void FragTrap::fireAttack(std::string const &target)
{
    std::cout << "Have you heard of Rammstein? Well, FEUER FREI!!" << std::endl;
    std::cout << "FR4G-TP " << this->_name << " attacks " << target <<
    " by fire, causing " << this->_fireDamage << " points of damage!" << std::endl;
    return ;
}

void FragTrap::takeDamage(unsigned int amount)
{
    if (amount >= this->_hitPoints + this->_armorDamageReduction)
    {
        std::cout << "OMG! I can't receive more damage! Need to get repaired, otherwise I will die!" << std::endl;
        std::cout << "FR4G-TP " << this->_name << " has 0 HP" << std::endl;
        this->_hitPoints = 0;
        return ;
    }
    this->_hitPoints = this->_hitPoints + this->_armorDamageReduction - amount;
    std::cout << "FR4G-TP " << this->_name << " receives " << amount <<
    " of damage, current hitpoints are  " << this->_hitPoints << std::endl;
    std::cout << "No matter how much you try, you will never kill me!" << std::endl;
    return ;
}

void FragTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoints < ENERGY)
    {
        std::cout << "Fragtrap " << this->_name << " has not enough energy points! Adding energy points" << std::endl;
        this->addEnergyPoints();
        return ;
    }
    if (this->_hitPoints + amount >= this->_maxHitPoints)
    {
        std::cout << "FR4G-TP " << this->_name << " is now totally repaired." <<std::endl;
        std::cout << "I will soon kill all the humans! He-he-he" << std::endl;
        this->_hitPoints = this->_maxHitPoints;
        return ;
    }
    this->_energyPoints -= ENERGY;
    this->_hitPoints += amount;
    std::cout << "FR4G-TP " << this->_name << "is repairing his hit points by " << amount <<
    "! His current hitpoints amount is " << this->_hitPoints << std::endl;
    std::cout << "I will live forever!" << std::endl;
    return ;
}

void FragTrap::addEnergyPoints(void)
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

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    unsigned char i;

    if (this->_energyPoints < ATTACK)
    {
        std::cout << "What a shame! FR4G-TP " << this->_name << "has not enough energy! Adding some energy" <<std::endl;
        this->addEnergyPoints();
        return ;
    }
    std::ifstream ifs("/dev/random");
    std::cout << this->_name << " is choosing a way to atack. You can only pray to God it won't be too harmfull!" << std::endl;
    ifs >> i;
    ifs.close();
    void  (FragTrap::*func[])(std::string const &) = 
    {&FragTrap::meleeAttack, &FragTrap::rangedAttack, &FragTrap::grenadeAttack,
        &FragTrap::freezingAttack, &FragTrap::fireAttack};
    i = i % 5;
    this->_energyPoints -= ATTACK;
    (this->*func[i])(target);
}

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    std::cout << "A default constructor called. It shouldn't have been called at all" << std::endl;
    return ;
}

ScavTrap::ScavTrap(std::string const name):_hitPoints(100), _maxHitPoints(100), _energyPoints(50),
_maxEnergyPoints(50), _level(1), _name(name), _meleeAttackDamage(20), _rangedAttackDamage(15), _grenadeDamage(20),
 _coldDamage(35), _fireDamage(65), _armorDamageReduction(3)
{
    std::cout << "SC4V-TP " << this->_name << " is constructed with chosen name. What an awesome imagination you have!" << std::endl;
    return ;
}

ScavTrap::ScavTrap(ScavTrap const &other)
{
    *this = other;
    std::cout << "ScavTrap " << this->_name << " is constructed from another ScavTrap! We are just like weasley twins!" << std::endl;
    return ;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &other)
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

ScavTrap::~ScavTrap(void)
{
    std::cout << "Oh nooooo! a ScavTrap " << this->_name << " is now just like Yanoukoviche's political career!\
Although even this ScavTrap has more chances to survive" << std::endl;
    return ;
}

unsigned int ScavTrap::getHitPoints(void) const
{
    return this->_hitPoints;
}

unsigned int ScavTrap::getMaxHitPoints(void) const
{
    return this->_maxHitPoints;
}

unsigned int ScavTrap::getEnergyPoints(void) const
{
    return this->_energyPoints;
}

unsigned int ScavTrap::getMaxEnergyPoints(void) const
{
    return this->_maxEnergyPoints;
}

unsigned int ScavTrap::getLevel(void) const
{
    return this->_level;
}

std::string ScavTrap::getName(void) const
{
    return this->_name;
}

unsigned int ScavTrap::getMeleeAttackDamage(void) const
{
    return this->_meleeAttackDamage;
}

unsigned int ScavTrap::getRangedAttackDamage(void) const
{
    return this->_rangedAttackDamage;
}

unsigned int ScavTrap::getGrenadeDamage(void) const
{
    return this->_grenadeDamage;
}

unsigned int ScavTrap::getColdDamage(void) const
{
    return this->_coldDamage;
}

unsigned int ScavTrap::getFireDamage(void) const
{
    return this->_fireDamage;
}

unsigned int ScavTrap::getArmorDamageReduction(void) const
{
    return (this->_armorDamageReduction);
}

void ScavTrap::rangedAttack(std::string const &target)
{
    std::cout << "I'm just like Robin Hood!" << std::endl;
    std::cout << "SC4V-TP " << this->_name << " attacks " << target <<
    " at range, causing " << this->_rangedAttackDamage << " points of damage!" << std::endl;
    return ;
}

void ScavTrap::meleeAttack(std::string const &target)
{
    std::cout << "Come and get some!" << std::endl;
    std::cout << "SC4V-TP " << this->_name << " attacks " << target <<
    " at melee, causing " << this->_meleeAttackDamage << " points of damage!" << std::endl;
    return ;
}

void ScavTrap::grenadeAttack(std::string const &target)
{
    std:: cout << "Hot potato!" << std::endl;
    std::cout << "SC4V-TP " << this->_name << " attacks " << target <<
    " with a grenade, causing " << this->_grenadeDamage << " points of damage!" << std::endl;
    return ;
}

void ScavTrap::freezingAttack(std::string const &target)
{
    std::cout << "Freeze! I don't know why I said that." << std::endl;
    std::cout << "SC4V-TP " << this->_name << " attacks " << target <<
    " by freezing, causing " << this->_coldDamage << " points of damage!" << std::endl;
    return ;
}

void ScavTrap::fireAttack(std::string const &target)
{
    std::cout << "I'll hold you close and won't let go. I'll watch you BUUUUURN!!" << std::endl;
    std::cout << "SC4V-TP " << this->_name << " attacks " << target <<
    " by fire, causing " << this->_fireDamage << " points of damage!" << std::endl;
    return ;
}

void ScavTrap::takeDamage(unsigned int amount)
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

void ScavTrap::beRepaired(unsigned int amount)
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
        if (this->_hitPoints != this->_maxHitPoints)
            this->_energyPoints -= ENERGY;
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

void ScavTrap::addEnergyPoints(void)
{
    if (this->_energyPoints + ENERGY >= this->_maxEnergyPoints)
    {
        std::cout << "Oh yeahh, I am full of energy now!!" << std::endl;
        this->_energyPoints = this->_maxEnergyPoints;
        return ;
    }
    std::cout << "Drinking redbull, I've heard it gives you wings" << std::endl;
    this->_energyPoints += ENERGY;
    std::cout << "My current energy is " << this->_energyPoints << std::endl;

    return ;
}

void ScavTrap::challengeNewcomer()
{
    unsigned char i;

    std::cout << "I have an interesting challenge for you" << std::endl;
    std::ifstream ifs("/dev/random");
    ifs >> i;
    ifs.close();

    std::string challenges[] = {"Try to sneeze with opened eyes", "Have fun in your life! It's the biggest challenge",
                                "Run all over the place and yell: IT'S THE APOCALYPSE TOMORROW!",
                                "JUST DO IT (that's the challenge, do whatever you have in mind right now)"};
    i = i % (sizeof(challenges) / sizeof(std::string));
    std::cout << challenges[i] << std::endl;
    return ;
}


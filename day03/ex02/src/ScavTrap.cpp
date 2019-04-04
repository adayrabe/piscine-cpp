#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
    std::cout << "A default constructor called. It shouldn't have been called at all" << std::endl;
    return ;
}

ScavTrap::ScavTrap(std::string const name): ClapTrap(name)
{
    std::cout << "SC4V-TP " << this->_name << " is constructed with chosen name. What an awesome imagination you have!" << std::endl;
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 50;
    this->_maxEnergyPoints = 50;
    this->_level = 1;
    this->_meleeAttackDamage = 20;
    this->_rangedAttackDamage = 15;
    this->_grenadeDamage = 20;
    this->_coldDamage = 35;
    this->_fireDamage = 65;
    this->_armorDamageReduction = 3;
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


void ScavTrap::rangedAttack(std::string const &target)
{
    std::cout << "I'm just like Robin Hood!" << std::endl;
    ClapTrap::rangedAttack(target);
    return ;
}

void ScavTrap::meleeAttack(std::string const &target)
{
    std::cout << "Come and get some!" << std::endl;
    ClapTrap::meleeAttack(target);
    return ;
}

void ScavTrap::grenadeAttack(std::string const &target)
{
    std:: cout << "Hot potato!" << std::endl;
    ClapTrap::grenadeAttack(target);
    return ;
}

void ScavTrap::freezingAttack(std::string const &target)
{
    std::cout << "Freeze! I don't know why I said that." << std::endl;
    ClapTrap::freezingAttack(target);
    return ;
}

void ScavTrap::fireAttack(std::string const &target)
{
    std::cout << "I'll hold you close and won't let go. I'll watch you BUUUUURN!!" << std::endl;
    ClapTrap::fireAttack(target);

    return ;
}

void ScavTrap::challengeNewcomer()
{
    unsigned char i;

    std::cout << "I have an interesting challenge for you" << std::endl;
    std::ifstream ifs("/dev/random");
    ifs >> i;
    ifs.close();

    std::string challenges[] = {"1", "2"};
    i = i % (sizeof(challenges) / sizeof(std::string));
    std::cout << challenges[i] << std::endl;
    return ;
}


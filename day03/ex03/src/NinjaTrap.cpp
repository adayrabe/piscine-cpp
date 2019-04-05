#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void)
{
    std::cout << "A default constructor called. It shouldn't have been called at all" << std::endl;
    return ;
}

NinjaTrap::NinjaTrap(std::string const name) : ClapTrap(name)
{
    std::cout << "NINJA-TP " << this->_name << " is constructed with chosen name. " << std::endl;
    this->_hitPoints = 60;
    this->_maxHitPoints = 60;
    this->_energyPoints = 120;
    this->_maxEnergyPoints = 120;
    this->_level = 1;
    this->_meleeAttackDamage = 60;
    this->_rangedAttackDamage = 5;
    this->_grenadeDamage = 30;
    this->_coldDamage = 25;
    this->_fireDamage = 40;
    this->_armorDamageReduction = 0;
    return ;
}

NinjaTrap::NinjaTrap(NinjaTrap const &other)
{
    *this = other;
    std::cout << "NinjaTrap " << this->_name << " is constructed from another NinjaTrap! Together we will conquer the world!" << std::endl;
    return ;
}

NinjaTrap& NinjaTrap::operator=(NinjaTrap const &other)
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

NinjaTrap::~NinjaTrap(void)
{
    std::cout << this->_name << " is joining his ancestors! let's just have a minute of silence" << std::endl;
    return ;
}


void NinjaTrap::rangedAttack(std::string const &target)
{
    std::cout << "Pew-pew-peeeewdiepie!" << std::endl;
    ClapTrap::rangedAttack(target);
    return ;
}

void NinjaTrap::meleeAttack(std::string const &target)
{
    std::cout << "I am a ninja. Just a little ninja. You'll never see me!" << std::endl;
    ClapTrap::meleeAttack(target);
    return ;
}

void NinjaTrap::grenadeAttack(std::string const &target)
{
    std:: cout << "Bad guy go boom!" << std::endl;
    ClapTrap::grenadeAttack(target);
    return ;
}

void NinjaTrap::freezingAttack(std::string const &target)
{
    std::cout << "Take a chill pill!" << std::endl;
    ClapTrap::freezingAttack(target);
    return ;
}

void NinjaTrap::fireAttack(std::string const &target)
{
    std::cout << "Your on fiiiiiiiiire!" << std::endl;
    ClapTrap::fireAttack(target);
    return ;
}

void NinjaTrap::ninjaShoebox(FragTrap const &target)
{
    std::cout << "Well-well-well, mr " << target.getName() << ", here we meet again!" << std::endl;
    return ;
}

void NinjaTrap::ninjaShoebox(NinjaTrap const &target)
{
    std::cout << target.getName() << ", my friend, where have you been? Come here, let's eat some pizza" << std::endl;
    return ;
}

void NinjaTrap::ninjaShoebox(ScavTrap const &target)
{
    std::cout << "" << std::endl;
    return ;
}

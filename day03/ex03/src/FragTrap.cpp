#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
    std::cout << "A default constructor called. It shouldn't have been called at all" << std::endl;
    return ;
}

FragTrap::FragTrap(std::string const name) : ClapTrap(name)
{
    std::cout << "FR4G-TP " << this->_name << " is constructed with chosen name. I like this name!" << std::endl;
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 100;
    this->_maxEnergyPoints = 100;
    this->_level = 1;
    this->_meleeAttackDamage = 30;
    this->_rangedAttackDamage = 20;
    this->_grenadeDamage = 35;
    this->_coldDamage = 15;
    this->_fireDamage = 45;
    this->_armorDamageReduction = 5;
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


void FragTrap::rangedAttack(std::string const &target)
{
    std::cout << "Are you a pussy? Come closer!" << std::endl;
    ClapTrap::rangedAttack(target);
    return ;
}

void FragTrap::meleeAttack(std::string const &target)
{
    std::cout << "Remember John Snow? Well, you will be stabbed now too!" << std::endl;
    ClapTrap::meleeAttack(target);
    return ;
}

void FragTrap::grenadeAttack(std::string const &target)
{
    std:: cout << "Present for you!" << std::endl;
    ClapTrap::grenadeAttack(target);
    return ;
}

void FragTrap::freezingAttack(std::string const &target)
{
    std::cout << "Icely done." << std::endl;
    ClapTrap::freezingAttack(target);
    return ;
}

void FragTrap::fireAttack(std::string const &target)
{
    std::cout << "Have you heard of Rammstein? Well, FEUER FREI!!" << std::endl;
    ClapTrap::fireAttack(target);
    return ;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    unsigned char i;

    if (this->_energyPoints < ATTACK)
    {
        std::cout << "What a shame! FR4G-TP " << this->_name << " has not enough energy! Adding some energy" <<std::endl;
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

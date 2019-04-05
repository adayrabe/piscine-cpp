#include "SuperTrap.hpp"

void testSuperTrap()
{
    std::cout << "Now testing NinjaTrap" << std::endl;
    SuperTrap tempSuperTrap("Donatello");

    std::string testAttacks = "Shredder";

    std::cout << "Testing all five attacks" << std::endl;
    tempSuperTrap.rangedAttack(testAttacks);
    tempSuperTrap.meleeAttack(testAttacks);
    tempSuperTrap.grenadeAttack(testAttacks);
    tempSuperTrap.freezingAttack(testAttacks);
    tempSuperTrap.fireAttack(testAttacks);

    std::cout << "===============================================" << std::endl;
    std::cout << "Now testing get damage funciton" << std::endl;
    tempSuperTrap.takeDamage(30);
    tempSuperTrap.takeDamage(30);
    tempSuperTrap.takeDamage(30);
    tempSuperTrap.takeDamage(30);

    std::cout << "===============================================" << std::endl;
    std::cout << "Now testing be repaired function" << std::endl;
    tempSuperTrap.beRepaired(50);
    tempSuperTrap.beRepaired(50);
    tempSuperTrap.beRepaired(50);

    std::cout << "===============================================" << std::endl;
    std::cout << "Now testing operator=" << std::endl;
    SuperTrap temp2 = tempSuperTrap;

    std::cout << "===============================================" << std::endl;
    std::cout << "Now testing shoebox function" << std::endl;
    tempSuperTrap.ninjaShoebox(FragTrap("Crang"));
    tempSuperTrap.ninjaShoebox(ScavTrap("Harley Quinn"));
    tempSuperTrap.ninjaShoebox(NinjaTrap("Leonardo"));

    std::cout << "===============================================" << std::endl;
    std::cout << "Now testing vaulthunter function" << std::endl;
    std::string testVaulthunterFunction = "Gaunter O'Dimm";
    temp2.vaulthunter_dot_exe(testVaulthunterFunction);
    temp2.vaulthunter_dot_exe(testVaulthunterFunction);
    temp2.vaulthunter_dot_exe(testVaulthunterFunction);
    temp2.vaulthunter_dot_exe(testVaulthunterFunction);
    temp2.vaulthunter_dot_exe(testVaulthunterFunction);

    return ;
}


int main()
{
	testSuperTrap();
	return (0);
}
#include "NinjaTrap.hpp"

void testScavTrap()
{
	std::cout << "Testing Scavtrap:" << std::endl;

	ScavTrap tempScavTrap("Tirion");

	std::string testAttacksScavTrap = "Joffry";
	std::cout << "Testing all five attacks" << std::endl;
	tempScavTrap.rangedAttack(testAttacksScavTrap);
	tempScavTrap.meleeAttack(testAttacksScavTrap);
	tempScavTrap.grenadeAttack(testAttacksScavTrap);
	tempScavTrap.freezingAttack(testAttacksScavTrap);
	tempScavTrap.fireAttack(testAttacksScavTrap);

	std::cout << "===============================================" << std::endl;
	std::cout << "Now testing get damage funciton" << std::endl;
	tempScavTrap.takeDamage(30);
	tempScavTrap.takeDamage(30);
	tempScavTrap.takeDamage(30);
	tempScavTrap.takeDamage(30);

	std::cout << "===============================================" << std::endl;
	std::cout << "Now testing be repaired function" << std::endl;
	tempScavTrap.beRepaired(50);
	tempScavTrap.beRepaired(50);
	tempScavTrap.beRepaired(50);

	std::cout << "===============================================" << std::endl;
	std::cout << "Now testing operator=" << std::endl;
	ScavTrap temp2ScavTrap = tempScavTrap;

	std::cout << "===============================================" << std::endl;
	std::cout << "Now testing challenge newcomer function" << std::endl;
	temp2ScavTrap.challengeNewcomer();
	temp2ScavTrap.challengeNewcomer();
	temp2ScavTrap.challengeNewcomer();
	temp2ScavTrap.challengeNewcomer();
}

void testFragTrap()
{
	std::cout << "Now testing frag trap" << std::endl;
	FragTrap tempFragTrap("Harry Potter");

	std::string testAttacks = "Voldemort";

	std::cout << "Testing all five attacks" << std::endl;
	tempFragTrap.rangedAttack(testAttacks);
	tempFragTrap.meleeAttack(testAttacks);
	tempFragTrap.grenadeAttack(testAttacks);
	tempFragTrap.freezingAttack(testAttacks);
	tempFragTrap.fireAttack(testAttacks);

	std::cout << "===============================================" << std::endl;
	std::cout << "Now testing get damage funciton" << std::endl;
	tempFragTrap.takeDamage(30);
	tempFragTrap.takeDamage(30);
	tempFragTrap.takeDamage(30);
	tempFragTrap.takeDamage(30);

	std::cout << "===============================================" << std::endl;
	std::cout << "Now testing be repaired function" << std::endl;
	tempFragTrap.beRepaired(50);
	tempFragTrap.beRepaired(50);
	tempFragTrap.beRepaired(50);

	std::cout << "===============================================" << std::endl;
	std::cout << "Now testing operator=" << std::endl;
	FragTrap temp2 = tempFragTrap;

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

void testNinjaTrap()
{
	std::cout << "Now testing NinjaTrap" << std::endl;
	NinjaTrap tempNinjaTrap("Donatello");

	std::string testAttacks = "Shredder";

	std::cout << "Testing all five attacks" << std::endl;
	tempNinjaTrap.rangedAttack(testAttacks);
	tempNinjaTrap.meleeAttack(testAttacks);
	tempNinjaTrap.grenadeAttack(testAttacks);
	tempNinjaTrap.freezingAttack(testAttacks);
	tempNinjaTrap.fireAttack(testAttacks);

	std::cout << "===============================================" << std::endl;
	std::cout << "Now testing get damage funciton" << std::endl;
	tempNinjaTrap.takeDamage(30);
	tempNinjaTrap.takeDamage(30);
	tempNinjaTrap.takeDamage(30);
	tempNinjaTrap.takeDamage(30);

	std::cout << "===============================================" << std::endl;
	std::cout << "Now testing be repaired function" << std::endl;
	tempNinjaTrap.beRepaired(50);
	tempNinjaTrap.beRepaired(50);
	tempNinjaTrap.beRepaired(50);

	std::cout << "===============================================" << std::endl;
	std::cout << "Now testing operator=" << std::endl;
	NinjaTrap temp2 = tempNinjaTrap;

	std::cout << "===============================================" << std::endl;
	std::cout << "Now testing shoebox function" << std::endl;
	tempNinjaTrap.ninjaShoebox(FragTrap("Crang"));
	tempNinjaTrap.ninjaShoebox(ScavTrap("Harley Quinn"));
	tempNinjaTrap.ninjaShoebox(NinjaTrap("Leonardo"));
	return ;
}

int main()
{
	testNinjaTrap();
	return (0);
}
#include "FragTrap.hpp"

int main()
{
	FragTrap temp("Harry Potter");

	std::string testAttacks = "Voldemort";

	std::cout << "Testing all five attacks" << std::endl;
	temp.rangedAttack(testAttacks);
	temp.meleeAttack(testAttacks);
	temp.grenadeAttack(testAttacks);
	temp.freezingAttack(testAttacks);
	temp.fireAttack(testAttacks);

	std::cout << "===============================================" << std::endl;
	std::cout << "Now testing get damage funciton" << std::endl;
	temp.takeDamage(30);
	temp.takeDamage(30);
	temp.takeDamage(30);
	temp.takeDamage(30);

	std::cout << "===============================================" << std::endl;
	std::cout << "Now testing be repaired function" << std::endl;
	temp.beRepaired(50);
	temp.beRepaired(50);
	temp.beRepaired(50);

	std::cout << "===============================================" << std::endl;
	std::cout << "Now testing operator=" << std::endl;
	FragTrap temp2 = temp;

	std::cout << "===============================================" << std::endl;
	std::cout << "Now testing vaulthunter function" << std::endl;
	std::string testVaulthunterFunction = "Gaunter O'Dimm";
	temp2.vaulthunter_dot_exe(testVaulthunterFunction);
	temp2.vaulthunter_dot_exe(testVaulthunterFunction);
	temp2.vaulthunter_dot_exe(testVaulthunterFunction);
	temp2.vaulthunter_dot_exe(testVaulthunterFunction);
	temp2.vaulthunter_dot_exe(testVaulthunterFunction);

	return (0);
}
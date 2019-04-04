#include "FragTrap.hpp"
#include "ScavTrap.hpp"
int main()
{
	ScavTrap temp("Harry Potter");

	std::string testAttacks = "Joffry";

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
	ScavTrap temp2 = temp;

	std::cout << "===============================================" << std::endl;
	std::cout << "Now testing vaulthunter function" << std::endl;


	return (0);
}
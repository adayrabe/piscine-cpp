

#include "../inc/ISpaceMarine.hpp"
#include "../inc/TacticalMarine.hpp"
#include "../inc/ISquad.hpp"
#include "../inc/AssaultTerminator.hpp"
#include "../inc/Squad.hpp"

int main() {
	ISpaceMarine* bob = new TacticalMarine();
	ISpaceMarine* jim = new AssaultTerminator();
	ISquad* vlc = new Squad();
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	std::cout << "=========================================" << std::endl;
	std::cout << "Testing operator= and copy constructor" << std::endl;

	ISpaceMarine* rock = new TacticalMarine();
	ISpaceMarine* ann = new AssaultTerminator();
	Squad *temp = new Squad();
	temp->push(rock);
	temp->push(ann);
	Squad *temp2 = new Squad(*temp);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = temp2->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	std::cout << "=========================================" << std::endl;
	std::cout << "Deleting everything..." << std::endl;
	delete vlc;
	// delete bob;
	// delete jim;
	delete temp;
	delete temp2;
	return 0;
}
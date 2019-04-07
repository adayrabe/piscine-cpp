#include "../inc/Attack.hpp"
#include "AttackSourcePlayer.hpp"
#include "../inc/Player.hpp"
#include "../inc/Enemies.hpp"
#include "../inc/Enemy.hpp"
int main() {


	Attack *simple = new Attack(1, "simple");
	Attack *ultimate = new Attack(3, "ultimate");
	AttackSourcePlayer *playerAttacks = new AttackSourcePlayer();
	playerAttacks->learnAttack(simple->clone(), ' ');;

	playerAttacks->learnAttack(ultimate->clone(), 'u');
	Player *player = new Player();
	player->set_attack(playerAttacks->createAttack(' '));

	Enemies *enemies = new Enemies();
	for (int i = 0; i < 20; i++)
	{
		enemies->push(new Enemy());
	}
	enemies->removeEnemy(3);
	enemies->removeEnemy(5);
	enemies->removeEnemy(0);
	enemies->removeEnemy(1);
	enemies->removeEnemy(19);
	delete simple;
	delete ultimate;
	delete playerAttacks;
	delete player;
	delete enemies;
	return 0;
}
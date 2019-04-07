
#include "../inc/Player.hpp"
#include "../inc/GameObj.hpp"
#include <iostream>

Player::Player	(void) : GameObj('P', 2, 12) { std::cout << "player\n";}

Player::Player	(Player const & inst)
{
	*this = inst;
}

Player::~Player	(void) {}

Attack *Player::get_attack() const {
	return _attack;
}

void Player::set_attack(Attack *_attack) {
	Player::_attack = _attack;
}


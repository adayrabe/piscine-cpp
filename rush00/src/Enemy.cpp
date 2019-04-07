#include "../inc/GameObj.hpp"
#include "../inc/Enemy.hpp"
#include <iostream>
#include <Enemy.hpp>

Enemy::Enemy	(void) : GameObj('E', 73, 3) {}

Enemy::Enemy	(Enemy const & inst)
{
	*this = inst;
}

Enemy::~Enemy	(void) {}

int Enemy::get_index() const {
    return _index;
}

void Enemy::set_index(int _index) {
    Enemy::_index = _index;
}

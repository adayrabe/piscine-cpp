#include "../inc/GameObj.hpp"
#include "../inc/Enemy.hpp"
#include <iostream>

Enemy::Enemy	(void) : GameObj('E', 73, 3) {}

Enemy::Enemy	(Enemy const & inst) : GameObj()
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

Enemy &			Enemy::operator=(Enemy const & inst)
{
	_index = inst.get_index();
	return *this;
}

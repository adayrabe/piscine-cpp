//
// Created by Artem DAYRABEKOV on 2019-04-05.
//

#include "../inc/Enemy.hpp"

Enemy::Enemy(){
    return;
}

Enemy::Enemy(int hp, std::string const & type): _hp(hp), _type(type){
    return ;
}

Enemy::Enemy(Enemy const &other) {
    *this = other;
    return ;
}

Enemy & Enemy::operator=(Enemy const &other){
    _hp = other.getHP();
    _type = other.getType();
    return *this;
}

Enemy::~Enemy(){
    return;
}


std::string Enemy::getType() const{
    return _type;
}

int Enemy::getHP() const{
    return _hp;
}

void Enemy::takeDamage(int amount){
    if (_hp - amount < 0)
        _hp = 0;
    else
        _hp -= amount;
}

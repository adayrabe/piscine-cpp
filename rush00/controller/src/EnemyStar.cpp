//
// Created by Artem DAYRABEKOV on 2019-04-06.
//

#include "../inc/EnemyStar.hpp"

EnemyStar::EnemyStar() {}

EnemyStar::EnemyStar(const EnemyStar &other) : AEnemy(other) {
    *this = other;
}

EnemyStar &EnemyStar::operator=(EnemyStar const &other) {
    _hp = other.get_hp();
    _armor = other.get_armor();
    _name = other.get_name();
    return *this;
}

EnemyStar::~EnemyStar() {

}

void EnemyStar::receiveDamage(int amount) {
    amount -= _armor;
    if (amount < 0)
        return ;
    _hp -= amount;
    if (_hp < 0)
        _hp = 0;
}

//
// Created by Artem DAYRABEKOV on 2019-04-06.
//

#include "../inc/AEnemy.hpp"

AEnemy::AEnemy() {

}

AEnemy::AEnemy(AEnemy const &other) {
    *this = other;
}

AEnemy &AEnemy::operator=(AEnemy const &other) {
    _hp = other.get_hp();
    _armor = other.get_armor();
    return *this;
}

AEnemy::~AEnemy() {

}

int AEnemy::get_armor() const {
    return _armor;
}

int AEnemy::get_hp() const {
    return _hp;
}

const std::string &AEnemy::get_name() const {
    return _name;
}



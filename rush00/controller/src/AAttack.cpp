//
// Created by Artem DAYRABEKOV on 2019-04-06.
//

#include "../inc/AAttack.hpp"

AAttack::AAttack() : _damage(0), _name(0){}

AAttack::AAttack(int _damage, const std::string &_name) : _damage(_damage), _name(_name) {}


AAttack::~AAttack() {

}

AAttack::AAttack(AAttack const &other) {
    *this = other;
}

AAttack &AAttack::operator=(AAttack const &other) {
    _damage = other.get_damage();
    _name = other.get_name();
    return *this;
}

int AAttack::get_damage() const {
    return _damage;
}

const std::string &AAttack::get_name() const {
    return _name;
}


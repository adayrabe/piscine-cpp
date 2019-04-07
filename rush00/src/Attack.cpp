//
// Created by Artem DAYRABEKOV on 2019-04-06.
//

#include "../inc/Attack.hpp"

Attack::Attack() : GameObj('*', 0, 0), _damage(0), _name(""), _index(0) {}

Attack::Attack(int _damage, const std::string &_name) : GameObj('*', 0, 0), _damage(_damage), _name(_name), _index(0) {}


Attack::~Attack() {

}

Attack::Attack(Attack const &other) {
    *this = other;
}

Attack &Attack::operator=(Attack const &other) {
    _damage = other.get_damage();
    _name = other.get_name();
    return *this;
}

int Attack::get_damage() const {
    return _damage;
}

const std::string &Attack::get_name() const {
    return _name;
}

Attack *Attack::clone() const {
    return new Attack(*this);
}

int Attack::get_index() const {
    return _index;
}

void Attack::set_index(int _index) {
    Attack::_index = _index;
}


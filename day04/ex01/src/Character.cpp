//
// Created by Artem DAYRABEKOV on 2019-04-05.
//

#include "../inc/Character.hpp"

Character::Character(){
    return ;
}
Character::Character(std::string const & name) : _name(name), _ap(MAX_AP), _weapon(NULL){
    return ;
}

Character::Character(Character const &other){
    *this = other;
    return ;
}

Character & Character::operator= (Character const &other){
    _name = other.getName();
    _ap = other.getAP();
}

Character::~Character(){

}

void Character::recoverAP(){
    if (_ap + 10 > MAX_AP)
        _ap = MAX_AP;
    else
        _ap += 10;
    return ;
}

void Character::equip(AWeapon* weapon){
    _weapon = weapon;
}

void Character::attack(Enemy* enemy){
    if (_weapon && _ap - _weapon->getAPCost() >= 0) {
        std::cout << _name << " attacks " << enemy->getType() << " with a weapon " << _weapon->getName() << std::endl;
        _ap -= _weapon->getAPCost();
        _weapon->attack();
        enemy->takeDamage(_weapon->getDamage());
        if (enemy->getHP() == 0)
            delete enemy;
    }
}

std::string Character::getName() const{
    return _name;
}

int Character::getAP() const{
    return _ap;
}
AWeapon * Character::getWeapon()const{
    return _weapon;
}

std::ostream & operator << (std::ostream & o, Character const & character)
{
    if (character.getWeapon())
        o << character.getName() << " has " << character.getAP() << " AP and wields a " <<
        character.getWeapon()->getName() << std::endl;
    else
        o << character.getName() << " has " << character.getAP() << " AP and is unarmed" << std::endl;
    return o;
}

//
// Created by Artem DAYRABEKOV on 2019-04-07.
//

#include "AttackSourceEnemy.hpp"

AttackSourceEnemy::AttackSourceEnemy() : _attacks(nullptr){}

AttackSourceEnemy::~AttackSourceEnemy() {
    removeAttacks();
}

AttackSourceEnemy::AttackSourceEnemy(AttackSourceEnemy const &other) {
    *this = other;
}

AttackSourceEnemy &AttackSourceEnemy::operator=(AttackSourceEnemy const &other) {
    removeAttacks();
    addAttacks(other.get_attacks());
    return *this;
}

Attack* AttackSourceEnemy::getAttackAt(int ind) const{
    t_attack *temp = _attacks;
    for (int i = 0; i < ind; i++) {
        if (!temp)
            return nullptr;
        temp = temp->next;
    }
    return temp->attack;
}



AttackSourceEnemy::AttackSourceEnemy(t_attack *attacks) {
    addAttacks(attacks);
}

void AttackSourceEnemy::addAttacks(t_attack *attacks) {
    for(int i = 0; attacks; i++) {
        learnAttack(attacks->attack->clone());
        attacks = attacks->next;
    }
}

void AttackSourceEnemy::removeAttacks() {
    t_attack *temp;

    while (_attacks)
    {
        temp = _attacks->next;
        delete _attacks->attack;
        delete _attacks;
        _attacks = temp;
    }
}

AttackSourceEnemy::t_attack *AttackSourceEnemy::get_attacks() const {
    return _attacks;
}

void AttackSourceEnemy::learnAttack(Attack *attack) {
    if (!attack)
        return ;
    if (!_attacks) {
        _attacks = new t_attack();
        _attacks->next = nullptr;
        _attacks->attack = attack;
    }
    else{
        t_attack *temp = _attacks;
        while (temp->next)
            temp = temp->next;
        temp->next = new t_attack();
        temp->next->attack = attack;
        temp->next->next = nullptr;
    }
}

Attack *AttackSourceEnemy::createAttack(std::string name) {

    t_attack *temp = _attacks;
    while (temp){
        if (temp->attack->get_name() == name)
            return temp->attack;
        temp = temp->next;
    }
    return nullptr;
}

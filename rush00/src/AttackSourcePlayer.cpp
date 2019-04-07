//
// Created by Artem DAYRABEKOV on 2019-04-06.
//

#include "AttackSourcePlayer.hpp"

AttackSourcePlayer::AttackSourcePlayer() : _attacks(nullptr){}

AttackSourcePlayer::~AttackSourcePlayer() {
   removeAttacks();
}

AttackSourcePlayer::AttackSourcePlayer(AttackSourcePlayer const &other) {
    *this = other;
}

AttackSourcePlayer &AttackSourcePlayer::operator=(AttackSourcePlayer const &other) {
    removeAttacks();
    addAttacks(other.get_attacks());
    return *this;
}

Attack* AttackSourcePlayer::getAttackAt(int ind) const{
    t_attack *temp = _attacks;
    for (int i = 0; i < ind; i++) {
        if (!temp)
            return nullptr;
        temp = temp->next;
    }
    return temp->attack;
}



AttackSourcePlayer::AttackSourcePlayer(t_attack *attacks) {
    addAttacks(attacks);
}

void AttackSourcePlayer::addAttacks(t_attack *attacks) {
    for(int i = 0; attacks; i++) {
        learnAttack(attacks->attack->clone(), attacks->button);
        attacks = attacks->next;
    }
}

void AttackSourcePlayer::removeAttacks() {
    t_attack *temp;

    while (_attacks)
    {
        temp = _attacks->next;
        delete _attacks->attack;
        delete _attacks;
        _attacks = temp;
    }
}

AttackSourcePlayer::t_attack *AttackSourcePlayer::get_attacks() const {
    return _attacks;
}

void AttackSourcePlayer::learnAttack(Attack *attack, unsigned char button) {
    if (!attack)
        return ;
    if (!_attacks) {
        _attacks = new t_attack();
        _attacks->next = nullptr;
        _attacks->attack = attack;
        _attacks->button = button;
    }
    else{
        t_attack *temp = _attacks;
        while (temp->next)
            temp = temp->next;
        temp->next = new t_attack();
        temp->next->attack = attack;
        temp->next->button = button;
        temp->next->next = nullptr;
    }
}

Attack *AttackSourcePlayer::createAttack(unsigned char button) {

    t_attack *temp = _attacks;
    while (temp){
        if (temp->button == button)
            return temp->attack;
        temp = temp->next;
    }
    return nullptr;
}

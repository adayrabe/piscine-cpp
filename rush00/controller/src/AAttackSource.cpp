//
// Created by Artem DAYRABEKOV on 2019-04-06.
//

#include "../inc/AAttackSource.hpp"

AAttackSource::AAttackSource() : _attacks(nullptr){}

AAttackSource::~AAttackSource() {
   removeAttacks();
}

AAttackSource::AAttackSource(AAttackSource const &other) {
    *this = other;
}

AAttackSource &AAttackSource::operator=(AAttackSource const &other) {
    t_attack *temp;

    removeAttacks();
    addAttacks(other.get_attacks());
    return *this;
}

AAttack* AAttackSource::getAttackAt(int ind) const{
    t_attack *temp = _attacks;
    for (int i = 0; i < ind; i++) {
        if (!temp)
            return nullptr;
        temp = temp->next;
    }
    return temp->attack;
}



AAttackSource::AAttackSource(t_attack *attacks) {
    addAttacks(attacks);
}

void AAttackSource::addAttacks(t_attack *attacks) {
    for(int i = 0; attacks; i++) {
        learnAttack(attacks->attack->clone());
        attacks = attacks->next;
    }
}

void AAttackSource::removeAttacks() {
    t_attack *temp;

    while (_attacks)
    {
        temp = _attacks->next;
        delete _attacks->attack;
        delete _attacks;
        _attacks = temp;
    }
}

AAttackSource::t_attack *AAttackSource::get_attacks() const {
    return _attacks;
}

void AAttackSource::learnAttack(AAttack *attack) {
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

AAttack *AAttackSource::createAttack(std::string const &name) {

    t_attack *temp = _attacks;
    while (temp){
        if (temp->attack->get_name() == name)
            return temp->attack;
        temp = temp->next;
    }
    return nullptr;
}

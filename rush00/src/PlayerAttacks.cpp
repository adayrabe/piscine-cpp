//
// Created by Artem DAYRABEKOV on 2019-04-07.
//

#include "../inc/PlayerAttacks.hpp"

int PlayerAttacks::_amount = 0;

PlayerAttacks::PlayerAttacks() : _playerAttacks(nullptr) {}

PlayerAttacks::PlayerAttacks(PlayerAttacks const &other) {
    *this = other;
}

PlayerAttacks::~PlayerAttacks() {

}

PlayerAttacks &PlayerAttacks::operator=(PlayerAttacks const &other) {
    removeAttacks();
    addAttacks(other.get_attacks());
    return *this;}

PlayerAttacks::t_playerAttack *PlayerAttacks::get_attacks() const {
    return _playerAttacks;
}

void PlayerAttacks::removeAttacks() {
    t_playerAttack *temp;

    while (_playerAttacks)
    {
        temp = _playerAttacks->next;
        delete _playerAttacks->attack;
        delete _playerAttacks;
        _playerAttacks = temp;
    }
}

Attack *PlayerAttacks::getAttack(int index) const {
    t_playerAttack *temp = _playerAttacks;
    for (int i = 0; i < index; i++)
    {
        if (!temp)
            return nullptr;
        temp = temp->next;
    }
    return temp->attack;
}

void PlayerAttacks::push(Attack *attack) {
    if (!attack)
        return ;
    if (!_playerAttacks) {
        _playerAttacks = new t_playerAttack();
        _playerAttacks->next = nullptr;
        _playerAttacks->attack = attack;
    }
    else{
        t_playerAttack *temp = _playerAttacks;
        while (temp->next)
            temp = temp->next;
        temp->next = new t_playerAttack();
        temp->next->attack = attack;
        temp->next->next = nullptr;
    }
    // attack->set_index(_amount);
    _amount++;
}

void PlayerAttacks::removeAttack(int index) {
    if (!_playerAttacks)
        return ;
    t_playerAttack *temp = _playerAttacks;
    t_playerAttack *temp_prev = nullptr;
	index = 0;
    while (temp)
    {
        // if (index == temp->attack->get_index())
        //     break;
        temp_prev = temp;
        temp = temp->next;
    }
    if (!temp_prev)
    {
        temp = _playerAttacks->next;
        delete _playerAttacks->attack;
        delete _playerAttacks;
        _playerAttacks = temp;
        return ;
    }
    if (temp) {
        temp_prev->next = temp->next;
        delete temp->attack;
        delete temp;
    }
}

void PlayerAttacks::addAttacks(PlayerAttacks::t_playerAttack *attacks) {
    while (attacks) {
        push(new Attack(*(attacks->attack)));
        attacks = attacks->next;
    }
}

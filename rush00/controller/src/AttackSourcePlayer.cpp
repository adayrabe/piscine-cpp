//
// Created by Artem DAYRABEKOV on 2019-04-06.
//

#include "../inc/AttackSourcePlayer.hpp"

AttackSourcePlayer::AttackSourcePlayer() {}

AttackSourcePlayer::~AttackSourcePlayer() {

}

AttackSourcePlayer::AttackSourcePlayer(AttackSourcePlayer const &other) {
    *this = other;
}


unsigned char AttackSourcePlayer::get_button() const {
    return _button;
}

AttackSourcePlayer &AttackSourcePlayer::operator=(AttackSourcePlayer const &other) {
    _button = other.get_button();
    addAttacks(other.get_attacks());
    return *this;
}

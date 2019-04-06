//
// Created by Artem DAYRABEKOV on 2019-04-06.
//

#include "../inc/AttackSourceEnemy.hpp"

AttackSourceEnemy::AttackSourceEnemy() {}

AttackSourceEnemy::AttackSourceEnemy(const AttackSourceEnemy &other) : AAttackSource(other) {
    *this = other;
}

AttackSourceEnemy &AttackSourceEnemy::operator=(AttackSourceEnemy const &other) {
    addAttacks(other.get_attacks());
    return *this;
}

AttackSourceEnemy::~AttackSourceEnemy() {

}

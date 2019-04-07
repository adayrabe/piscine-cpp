//
// Created by Artem DAYRABEKOV on 2019-04-07.
//

#include <Enemies.hpp>

#include "Enemies.hpp"


int Enemies::_amount = 0;

Enemies::Enemies() : _enemies(nullptr) {}

Enemies::Enemies(Enemies const &other) {
    *this = other;
}

Enemies::~Enemies() {
    removeEnemies();
}

Enemies &Enemies::operator=(Enemies const &other) {
    removeEnemies();
    addEnemies(other.get_enemies());
    return *this;
}

Enemies::t_enemy *Enemies::get_enemies() const {
    return _enemies;
}

void Enemies::removeEnemies() {
    t_enemy *temp;

    while (_enemies)
    {
        temp = _enemies->next;
        delete _enemies->enemy;
        delete _enemies;
        _enemies = temp;
    }
}

Enemy *Enemies::getEnemy(int index) const {
    t_enemy *temp = _enemies;
    for (int i = 0; i < index; i++)
    {
        if (!temp)
            return nullptr;
        temp = temp->next;
    }
    return temp->enemy;
}

void Enemies::push(Enemy *enemy) {
    if (!enemy)
        return ;
    if (!_enemies) {
        _enemies = new t_enemy();
        _enemies->next = nullptr;
        _enemies->enemy = enemy;
    }
    else{
        t_enemy *temp = _enemies;
        while (temp->next)
            temp = temp->next;
        temp->next = new t_enemy();
        temp->next->enemy = enemy;
        temp->next->next = nullptr;
    }
    enemy->set_index(_amount);
    _amount++;
}

void Enemies::removeEnemy(int index) {
    if (!_enemies)
        return ;
    t_enemy *temp = _enemies;
    t_enemy *temp_prev = nullptr;
    while (temp)
    {
        if (index == temp->enemy->get_index())
            break;
        temp_prev = temp;
        temp = temp->next;
    }
    if (!temp_prev)
    {
        temp = _enemies->next;
        delete _enemies->enemy;
        delete _enemies;
        _enemies = temp;
        return ;
    }
    if (temp) {
        temp_prev->next = temp->next;
        delete temp->enemy;
        delete temp;
    }
}

void Enemies::addEnemies(Enemies::t_enemy *enemies) {
    while (enemies) {
        push(new Enemy(*(enemies->enemy)));
        enemies = enemies->next;
    }
}

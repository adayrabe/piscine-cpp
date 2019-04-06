//
// Created by Artem DAYRABEKOV on 2019-04-06.
//

#ifndef CONTROLLER_ATTACKSOURCEENEMY_HPP
#define CONTROLLER_ATTACKSOURCEENEMY_HPP

#include "AAttackSource.hpp"
class AttackSourceEnemy : public virtual AAttackSource{
public:
    AttackSourceEnemy();

    AttackSourceEnemy(const AttackSourceEnemy &other);

    AttackSourceEnemy &operator=(AttackSourceEnemy const &other);

    virtual ~AttackSourceEnemy();
};


#endif //CONTROLLER_ATTACKSOURCEENEMY_HPP

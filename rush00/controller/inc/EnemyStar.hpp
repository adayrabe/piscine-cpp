//
// Created by Artem DAYRABEKOV on 2019-04-06.
//

#ifndef CONTROLLER_ENEMYSTAR_HPP
#define CONTROLLER_ENEMYSTAR_HPP

#include "AEnemy.hpp"

class EnemyStar : public virtual AEnemy{
public:
    EnemyStar();

    EnemyStar(const EnemyStar &other);
    EnemyStar& operator= (EnemyStar const &other);

    virtual ~EnemyStar();

    void receiveDamage(int i);

};


#endif //CONTROLLER_ENEMYSTAR_HPP

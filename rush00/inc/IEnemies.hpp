//
// Created by Artem DAYRABEKOV on 2019-04-07.
//

#ifndef RUSH00_IENEMIES_HPP
#define RUSH00_IENEMIES_HPP

#include "Enemy.hpp"
class IEnemies {
public:
    virtual ~IEnemies() {}
    virtual Enemy *getEnemy(int) const = 0;
    virtual void push(Enemy *enemy) = 0;
    virtual void removeEnemy(int index) = 0;
};


#endif //RUSH00_IENEMIES_HPP

//
// Created by Artem DAYRABEKOV on 2019-04-06.
//

#ifndef CONTROLLER_AENEMY_HPP
#define CONTROLLER_AENEMY_HPP

#include <iostream>

class AEnemy {

protected:
    int _hp;
    int _armor;
//    AAtack* attack
    std::string _name;

public:
    AEnemy();
    AEnemy(AEnemy const &other);
    AEnemy& operator=(AEnemy const &other);
    virtual ~AEnemy();

    virtual void receiveDamage(int) = 0;

    int get_hp() const;
    int get_armor() const;

    const std::string &get_name() const;
};


#endif //CONTROLLER_AENEMY_HPP

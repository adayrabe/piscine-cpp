//
// Created by Artem DAYRABEKOV on 2019-04-06.
//

#ifndef CONTROLLER_IATTACKSOURCE_HPP
#define CONTROLLER_IATTACKSOURCE_HPP
#include "Attack.hpp"

class IAttackSource
{
public:
//    typedef struct s_attack{
//        Attack *attack;
//        struct  s_attack *next;
//    }t_attack;

    virtual ~IAttackSource() {}
    virtual void learnAttack(Attack *, unsigned char button) = 0;
    virtual Attack *createAttack(unsigned char button) = 0;
};

#endif //CONTROLLER_IATTACKSOURCE_HPP

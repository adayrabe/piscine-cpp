//
// Created by Artem DAYRABEKOV on 2019-04-06.
//

#ifndef CONTROLLER_IATTACKSOURCE_HPP
#define CONTROLLER_IATTACKSOURCE_HPP
#include "AAttack.hpp"

class IAttackSource
{
public:
//    typedef struct s_attack{
//        AAttack *attack;
//        struct  s_attack *next;
//    }t_attack;

    virtual ~IAttackSource() {}
    virtual void learnAttack(AAttack *) = 0;
    virtual AAttack *createAttack(std::string const &type) = 0;
};

#endif //CONTROLLER_IATTACKSOURCE_HPP

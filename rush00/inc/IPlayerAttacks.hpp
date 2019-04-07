//
// Created by Artem DAYRABEKOV on 2019-04-07.
//

#ifndef RUSH00_IPLAYERATTACKS_HPP
#define RUSH00_IPLAYERATTACKS_HPP

#include "Attack.hpp"

class IPlayerAttacks{
public:
    
    virtual ~IPlayerAttacks() {}
    virtual Attack *getAttack(int) const = 0;
    virtual void push(Attack *attack) = 0;
    virtual void removeAttack(int index) = 0;
};

#endif //RUSH00_IPLAYERATTACKS_HPP

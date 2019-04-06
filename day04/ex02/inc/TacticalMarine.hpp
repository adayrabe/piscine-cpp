//
// Created by Dayrabekov Artem on 2019-04-05.
//

#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"
#include <iostream>
class TacticalMarine : public virtual ISpaceMarine{
public:
    TacticalMarine();
    TacticalMarine(TacticalMarine const &other);
    TacticalMarine &operator= (TacticalMarine const &other);
    virtual ~TacticalMarine();
    TacticalMarine* clone() const;
    void battleCry() const;
    void rangedAttack() const;
    void meleeAttack() const;
};


#endif //EX02_TACTICALMARINE_HPP

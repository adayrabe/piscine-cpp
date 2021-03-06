//
// Created by Dayrabekov Artem on 2019-04-06.
//

#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

#include <iostream>
#include "ISpaceMarine.hpp"
class AssaultTerminator : public virtual ISpaceMarine{
public:
    AssaultTerminator();
    AssaultTerminator(AssaultTerminator const &other);
    AssaultTerminator &operator= (AssaultTerminator const &other);
    virtual ~AssaultTerminator();
    AssaultTerminator* clone() const;
    void battleCry() const;
    void rangedAttack() const;
    void meleeAttack() const;
};


#endif //EX02_ASSAULTTERMINATOR_HPP

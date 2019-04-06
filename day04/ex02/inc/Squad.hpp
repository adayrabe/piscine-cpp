//
// Created by Dayrabekov Artem on 2019-04-05.
//

#ifndef EX02_SQUAD_HPP
#define EX02_SQUAD_HPP

#include "ISquad.hpp"
#include <iostream>
class Squad : public virtual ISquad{
    typedef struct s_unit{
        ISpaceMarine *unit;
        struct s_unit *next;
    }t_unit;

private:
    int _count;
    t_unit *_armyHead;
public:
    Squad();
    Squad (Squad const &other);
    Squad & operator=(Squad const & other);
    ~Squad();
    int getCount() const;
    ISpaceMarine* getUnit(int) const;
    int push(ISpaceMarine*);
};


#endif //EX02_SQUAD_HPP

//
// Created by Artem DAYRABEKOV on 2019-04-06.
//

#ifndef EX03_ICE_HPP
#define EX03_ICE_HPP
#include "AMateria.hpp"


class Ice : public virtual AMateria{

public:
    Ice();
    Ice(Ice const & other);
    Ice&operator=(Ice const &other);
    ~Ice();

    Ice* clone() const;
    void use(ICharacter& target);

};


#endif //EX03_ICE_HPP

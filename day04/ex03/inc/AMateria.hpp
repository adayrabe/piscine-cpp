//
// Created by Artem DAYRABEKOV on 2019-04-06.
//

#ifndef EX03_AMATERIA_HPP
#define EX03_AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria {
protected:
    std::string _type;
    unsigned int _xp;

public:
    AMateria();
    AMateria(std::string const & type);
    AMateria(AMateria const & other);

    virtual AMateria& operator= (AMateria const &other);
    virtual ~AMateria();
    std::string const & getType() const; //Returns the materia type
    unsigned int getXP() const; //Returns the Materia's XP
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);

};


#endif //EX03_AMATERIA_HPP

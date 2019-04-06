//
// Created by Artem DAYRABEKOV on 2019-04-06.
//

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public virtual AMateria{

public:
    Cure();
    Cure(Cure const & other);
    Cure&operator=(Cure const &other);
    ~Cure();

    Cure* clone() const;
    void use(ICharacter& target);

};


#endif //EX03_CURE_HPP

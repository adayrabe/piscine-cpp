//
// Created by Artem DAYRABEKOV on 2019-04-06.
//

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource {

public:
    virtual ~IMateriaSource() {}

    virtual void learnMateria(AMateria *) = 0;

    virtual AMateria *createMateria(std::string const &type) = 0;
};
#endif //EX03_IMATERIASOURCE_HPP

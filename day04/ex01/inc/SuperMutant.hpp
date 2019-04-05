//
// Created by Artem DAYRABEKOV on 2019-04-05.
//

#ifndef EX01_SUPERMUTANT_HPP
#define EX01_SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy{
    SuperMutant();
    SuperMutant(SuperMutant const &other);
    SuperMutant &operator=(SuperMutant const &other);
    ~SuperMutant();

    void takeDamage(int);
};


#endif //EX01_SUPERMUTANT_HPP

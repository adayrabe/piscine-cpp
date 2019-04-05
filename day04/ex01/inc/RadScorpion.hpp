//
// Created by Artem DAYRABEKOV on 2019-04-05.
//

#ifndef EX01_RADSCORPION_HPP
#define EX01_RADSCORPION_HPP
#include "Enemy.hpp"

class RadScorpion : public Enemy{
    RadScorpion();
    RadScorpion(RadScorpion const &other);
    RadScorpion &operator=(RadScorpion const &other);
    ~RadScorpion();

};


#endif //EX01_RADSCORPION_HPP

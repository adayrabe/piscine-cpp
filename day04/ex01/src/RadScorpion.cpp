//
// Created by Artem DAYRABEKOV on 2019-04-05.
//

#include "../inc/RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion"){
    std::cout << "* click click click *" << std::endl;
    return ;
}

RadScorpion::RadScorpion(RadScorpion const &other) : Enemy(other){
    *this = other;
}

RadScorpion & RadScorpion::operator=(RadScorpion const &other){
    _hp = other.getHP();
    _type = other.getType();
    return *this;
}

RadScorpion::~RadScorpion(){
    std::cout << "* SPROTCH *" << std::endl;
    return ;
}

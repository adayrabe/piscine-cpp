//
// Created by Artem DAYRABEKOV on 2019-04-05.
//

#include "../inc/SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant"){
    std::cout << "Gaaah. Me want smash heads !" << std::endl;
    return ;
}

SuperMutant::SuperMutant(SuperMutant const &other) : Enemy(other){
    *this = other;
}

SuperMutant & SuperMutant::operator=(SuperMutant const &other){
    _hp = other.getHP();
    _type = other.getType();
    return *this;
}

SuperMutant::~SuperMutant(){
    std::cout << "Aaargh ..." << std::endl;
    return ;
}

void SuperMutant::takeDamage(int amount){
    if (amount < 3)
        amount = 0;
    else
        amount -= 3;
    if (_hp - amount >= 0)
        _hp -= amount;
    else
        _hp = 0;
}
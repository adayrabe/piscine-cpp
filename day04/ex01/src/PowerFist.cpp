//
// Created by Artem DAYRABEKOV on 2019-04-05.
//

#include "../inc/PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 50, 8){
    return;
}

PowerFist::PowerFist(PowerFist const &other) : AWeapon(other){

}

PowerFist & PowerFist::operator=(PowerFist const &other){
    _name = other.getName();
    _apcost = other.getAPCost();
    _damage = other.getDamage();
    return *this;
}

PowerFist::~PowerFist(){
    return;
}

void PowerFist::attack() const{
    std::cout << "* pschhh... SBAM! *" << std::endl;
    return ;
}
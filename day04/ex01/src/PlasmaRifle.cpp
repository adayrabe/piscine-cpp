//
// Created by Artem DAYRABEKOV on 2019-04-05.
//

#include "../inc/PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasme Rifle", 5, 21){
    return;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &other) : AWeapon(other){
	*this = other;
}

PlasmaRifle & PlasmaRifle::operator=(PlasmaRifle const &other){
    _name = other.getName();
    _apcost = other.getAPCost();
    _damage = other.getDamage();
    return *this;
}

PlasmaRifle::~PlasmaRifle(){
    return;
}

void PlasmaRifle::attack() const{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
    return ;
}

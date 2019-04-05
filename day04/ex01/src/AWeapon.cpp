//
// Created by Artem DAYRABEKOV on 2019-04-05.
//

#include "../inc/AWeapon.hpp"

AWeapon::AWeapon(){
    return ;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage):_name(name), _apcost(apcost), _damage(damage){
    return;
}

AWeapon::AWeapon(AWeapon const& other){
    *this = other;
    return;
}
AWeapon& AWeapon::operator=(AWeapon const &other){
    _name = other.getName();
    _apcost = other.getAPCost();
    _damage = other.getDamage();
    return *this;
}

AWeapon::~AWeapon(){
    return;
}

std::string AWeapon::getName() const{
    return _name;
}
int AWeapon::getAPCost() const{
    return _apcost;
}
int AWeapon::getDamage() const{
    return _damage;
}
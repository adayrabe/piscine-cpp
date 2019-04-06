//
// Created by Artem DAYRABEKOV on 2019-04-06.
//

#include "../inc/AMateria.hpp"


AMateria::AMateria() : _type(""), _xp(0){
    return ;
}

AMateria::AMateria(AMateria const & other){
    *this = other;
    return ;
}

AMateria::AMateria(std::string const & type) : _type(type), _xp(0){
    return ;
}

AMateria& AMateria::operator= (AMateria const &other){
    _type = other.getType();
    _xp = other.getXP();
    return *this;
}

AMateria::~AMateria(){
    return ;
}

std::string const & AMateria::getType() const{
    return _type;
}

unsigned int AMateria::getXP() const{
    return _xp;
}

void AMateria::use(ICharacter& target){
    _xp += 10;
    target = target;
}
//
// Created by Artem DAYRABEKOV on 2019-04-06.
//

#include "../inc/Cure.hpp"

Cure::Cure() : AMateria("cure"){
    return ;
}

Cure::Cure(Cure const & other){
    *this = other;
}

Cure& Cure::operator=(Cure const &other){
    _type = other.getType();
    _xp = other.getXP();
    return *this;
}

Cure::~Cure(){
    return ;
}

Cure* Cure::clone() const{
    Cure *res = new Cure(*this);
    return res;
}

void Cure::use(ICharacter& target){
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
    AMateria::use(target);
    return ;
}
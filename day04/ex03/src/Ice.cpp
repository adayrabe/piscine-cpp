//
// Created by Artem DAYRABEKOV on 2019-04-06.
//

#include "../inc/Ice.hpp"

Ice::Ice() : AMateria("ice"){
    return ;
}

Ice::Ice(Ice const & other){
    *this = other;
}

Ice& Ice::operator=(Ice const &other){
    _type = other.getType();
    _xp = other.getXP();
    return *this;
}

Ice::~Ice(){
    return ;
}

Ice* Ice::clone() const{
    Ice *res = new Ice(*this);
    return res;
}

void Ice::use(ICharacter& target){
    std::cout << "* shoots an ice bolt at " << target.getName() << " * " << std::endl;
    AMateria::use(target);

    return ;
}
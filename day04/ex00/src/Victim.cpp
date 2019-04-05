//
// Created by Artem DAYRABEKOV on 2019-04-05.
//

#include "Victim.hpp"

Victim::Victim(std::string name):_name(name){
    std::cout << "Some random victim called " << _name << " just popped !" << std::endl;
    return;
}

Victim::Victim(Victim const &other){
    *this = other;
    return;
}

Victim & Victim::operator=(Victim const &other){
    this->_name = other.getName();
    return *this;
}

Victim::~Victim(){
    std::cout << "Victim " << _name <<  " just died for no apparent reason !" << std::endl;
    return;
}

std::string Victim:: getName() const{
    return _name;
}

void Victim::getPolymorphed() const{
    std::cout << _name << " has been turned into a cute little sheep !" << std::endl;
    return;
}


std::ostream& operator<< (std::ostream &o, Victim const & victim){
    o << "I'm " << victim.getName() << " and I like otters !" << std::endl;
    return o;
}


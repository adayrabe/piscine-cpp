//
// Created by Artem DAYRABEKOV on 2019-04-05.
//

#include "Peon.hpp"

Peon::Peon(std::string name):Victim(name){
    std::cout << "Zog zog." << std::endl;
    return;
}

Peon::Peon(Peon const &other):Victim(other){
    *this = other;
    return;
}

Peon& Peon::operator= (Peon const &other){
    Victim::_name = other.getName();
    return *this;
}

Peon::~Peon(){
    std::cout << "Bleuark..." << std::endl;
    return ;
}

void Peon::getPolymorphed() const{
    std::cout<< _name << " has been turned into a pink pony !" << std::endl;
    return ;
}

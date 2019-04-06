//
// Created by Dayrabekov Artem on 2019-04-06.
//

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(){
    std::cout << "* teleports from space *" << std::endl;
    return ;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &other){
    *this = other;
    return ;
}

AssaultTerminator & AssaultTerminator::operator= (AssaultTerminator const &other){
    return *this;
}

AssaultTerminator::~AssaultTerminator(){
    std::cout << "I’ll be back ..." << std::endl;
    return ;
}

ISpaceMarine* AssaultTerminator::clone() const{
    ISpaceMarine *clone = new AssaultTerminator();
    return clone;
}

void AssaultTerminator::battleCry() const{
    std::cout << "This code is unclean. PURIFY IT !" << std::endl;
    return ;
}

void AssaultTerminator::rangedAttack() const{
    std::cout << "* does nothing *" << std::endl;
    return ;
}

void AssaultTerminator::meleeAttack() const{
    std::cout << "* attacks with chainfists *" << std::endl;
    return ;
}
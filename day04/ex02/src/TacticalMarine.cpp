//
// Created by Dayrabekov Artem on 2019-04-05.
//

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(){
    std::cout << "Tactical Marine ready for battle" << std::endl;
    return ;
}

TacticalMarine::TacticalMarine(TacticalMarine const &other){
    *this = other;
    return ;
}

TacticalMarine & TacticalMarine::operator= (TacticalMarine const &other){
    (void)other;
    return *this;
}

TacticalMarine::~TacticalMarine(){
    std::cout << "Aaargh ..." << std::endl;
    return ;
}

TacticalMarine* TacticalMarine::clone() const{
    TacticalMarine *clone = new TacticalMarine();
    return clone;
}

void TacticalMarine::battleCry() const{
    std::cout << "For the holy PLOT !" << std::endl;
    return ;
}

void TacticalMarine::rangedAttack() const{
    std::cout << "* attacks with bolter *" << std::endl;
    return ;
}

void TacticalMarine::meleeAttack() const{
    std::cout << "* attacks with chainsword *" << std::endl;
    return ;
}
//
// Created by Artem DAYRABEKOV on 2019-04-05.
//

#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{
    return ;
}

Sorcerer::Sorcerer(std::string name, std::string title):_name(name), _title(title)
{
    std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
    return ;
}

Sorcerer::Sorcerer(Sorcerer const &other)
{
    *this = other;
    return ;
}

Sorcerer& Sorcerer::operator=(Sorcerer const &other)
{
    _name = other.getName();
    _title = other.getTitle();
    return *this;
}

Sorcerer::~Sorcerer()
{
    std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same !" << std::endl;
}

std::string Sorcerer::getName() const
{
    return _name;
}

std::string Sorcerer::getTitle() const
{
    return _title;
}

void  Sorcerer::polymorph(Victim const &victim){
    victim.getPolymorphed();
    return ;
}


std::ostream& operator<<(std::ostream &o, Sorcerer const& sorcerer)
{
    o << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() << ", and I like ponies !" << std::endl;
    return o;
}

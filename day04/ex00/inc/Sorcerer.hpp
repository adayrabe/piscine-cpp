//
// Created by Artem DAYRABEKOV on 2019-04-05.
//

#ifndef SORCERER_HPP
#define SORCERER_HPP
#include <iostream>
#include "Victim.hpp"

class Sorcerer {
public:
    Sorcerer(std::string name, std::string title);
    Sorcerer (Sorcerer const &other);
    Sorcerer&operator=(Sorcerer const &other);
    virtual ~Sorcerer();

    std::string getName() const;
    std::string getTitle() const;

    virtual void polymorph(Victim const &victim);

private:
    std::string _name;
    std::string _title;
    Sorcerer();
};

std::ostream& operator<<(std::ostream &o, Sorcerer const& sorcerer);
#endif //EX00_SORCERER_HPP

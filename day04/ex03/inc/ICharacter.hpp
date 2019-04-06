//
// Created by Artem DAYRABEKOV on 2019-04-06.
//

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <iostream>

class AMateria;

class ICharacter {
public:
    virtual ~ICharacter() {}

    virtual std::string const &getName() const = 0;

    virtual void equip(AMateria *m) = 0;

    virtual void unequip(int idx) = 0;

    virtual void use(int idx, ICharacter &target) = 0;
};
#endif //EX03_ICHARACTER_HPP

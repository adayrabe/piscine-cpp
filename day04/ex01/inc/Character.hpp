//
// Created by Artem DAYRABEKOV on 2019-04-05.
//

#ifndef EX01_CHARACTER_HPP
#define EX01_CHARACTER_HPP
#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

#define MAX_AP 40

class Character {
private:
    Character();
protected:
    std::string _name;
    int _ap;
    AWeapon *_weapon;
public:
    Character(std::string const & name);
    Character(Character const &other);
    Character &operator= (Character const &other);
    virtual ~Character();
    void recoverAP();
    void equip(AWeapon*);
    void attack(Enemy*);
    std::string virtual getName() const;
    int getAP() const;
    AWeapon * getWeapon()const;
};

std::ostream & operator << (std::ostream & o, Character const & character);

#endif //EX01_CHARACTER_HPP

//
// Created by Artem DAYRABEKOV on 2019-04-05.
//

#ifndef AWEAPON_HPP
#define AWEAPON_HPP
#include <iostream>

class AWeapon {
public:
    AWeapon(std::string const & name, int apcost, int damage);
    AWeapon(AWeapon const& other);
    AWeapon& operator=(AWeapon const &other);
    virtual ~AWeapon();
    std::string virtual getName() const;
    int getAPCost() const;
    int getDamage() const;
    virtual void attack() const = 0;

protected:
    std::string _name;
    int _apcost;
    int _damage;

private:
    AWeapon();

};


#endif //EX01_AWEAPON_HPP

//
// Created by Artem DAYRABEKOV on 2019-04-05.
//

#ifndef EX01_POWERFIST_HPP
#define EX01_POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon{
public:
    PowerFist();
    PowerFist(PowerFist const &other);
    PowerFist &operator=(PowerFist const &other);
    ~PowerFist();
    void attack() const;
};


#endif //EX01_POWERFIST_HPP

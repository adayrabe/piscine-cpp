//
// Created by Artem DAYRABEKOV on 2019-04-05.
//

#ifndef EX01_PLASMARIFLE_HPP
#define EX01_PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {
public:
    PlasmaRifle();
    PlasmaRifle(PlasmaRifle const &other);
    PlasmaRifle &operator=(PlasmaRifle const &other);
    ~PlasmaRifle();
    void attack() const;
};


#endif //EX01_PLASMARIFLE_HPP

//
// Created by Artem DAYRABEKOV on 2019-04-06.
//

#ifndef CONTROLLER_ATTACKSOURCEPLAYER_HPP
#define CONTROLLER_ATTACKSOURCEPLAYER_HPP

#include "AAttackSource.hpp"

class AttackSourcePlayer  : public virtual AAttackSource{

private:
    unsigned char _button;

public:
    AttackSourcePlayer();
    AttackSourcePlayer(AttackSourcePlayer const &other);

    AttackSourcePlayer &operator=(AttackSourcePlayer const &other);

    virtual ~AttackSourcePlayer();

    unsigned char get_button() const;
};


#endif //CONTROLLER_ATTACKSOURCEPLAYER_HPP

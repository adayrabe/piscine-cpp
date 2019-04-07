//
// Created by Artem DAYRABEKOV on 2019-04-06.
//

#ifndef CONTROLLER_AATTACKSOURCE_HPP
#define CONTROLLER_AATTACKSOURCE_HPP

#include "IAttackSource.hpp"
class AttackSourcePlayer : public IAttackSource{

    typedef struct s_attack{
        Attack *attack;
        unsigned char button;
        struct  s_attack *next;
    }t_attack;
protected:
    t_attack *_attacks;
public:
    AttackSourcePlayer();
    AttackSourcePlayer(AttackSourcePlayer const &other);

    AttackSourcePlayer(t_attack *_attacks);

    virtual AttackSourcePlayer& operator=(AttackSourcePlayer const &other);
    virtual ~AttackSourcePlayer();
    Attack* getAttackAt(int ind) const;

    t_attack *get_attacks() const;

    void addAttacks(t_attack *attacks);
    void removeAttacks();

    void learnAttack(Attack *attack, unsigned char button);

    Attack *createAttack(unsigned char button);
};


#endif //CONTROLLER_AATTACKSOURCE_HPP

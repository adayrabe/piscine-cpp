//
// Created by Artem DAYRABEKOV on 2019-04-07.
//

#ifndef RUSH00_ATTACKSOURCEENEMY_HPP
#define RUSH00_ATTACKSOURCEENEMY_HPP
#include "IAttackSource.hpp"

class AttackSourceEnemy{
    typedef struct s_attack{
        Attack *attack;
        struct  s_attack *next;
    }t_attack;
protected:
    t_attack *_attacks;
public:
    AttackSourceEnemy();
    AttackSourceEnemy(AttackSourceEnemy const &other);

    AttackSourceEnemy(t_attack *_attacks);

    virtual AttackSourceEnemy& operator=(AttackSourceEnemy const &other);
    virtual ~AttackSourceEnemy();
    Attack* getAttackAt(int ind) const;

    t_attack *get_attacks() const;

    void addAttacks(t_attack *attacks);
    void removeAttacks();

    void learnAttack(Attack *attack);

    Attack *createAttack(std::string name);
};


#endif //RUSH00_ATTACKSOURCEENEMY_HPP

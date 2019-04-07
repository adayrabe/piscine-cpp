//
// Created by Artem DAYRABEKOV on 2019-04-07.
//

#ifndef RUSH00_PLAYERATTACKS_HPP
#define RUSH00_PLAYERATTACKS_HPP

#include "IPlayerAttacks.hpp"
class PlayerAttacks : IPlayerAttacks{
public:

    typedef struct s_playerAttack{
        Attack *attack;
        struct s_playerAttack *next;
    }t_playerAttack;
private:
    t_playerAttack *_playerAttacks;
    static int _amount;

public:
    PlayerAttacks();
    PlayerAttacks(PlayerAttacks const &other);
    PlayerAttacks& operator=(PlayerAttacks const &other);
    virtual ~PlayerAttacks();

    t_playerAttack *get_attacks() const;

    void removeAttacks();
    void addAttacks(t_playerAttack *attacks);

    Attack *getAttack(int i) const;
    void push(Attack *attack);
    void removeAttack(int index);
};


#endif //RUSH00_PLAYERATTAACKS_HPP

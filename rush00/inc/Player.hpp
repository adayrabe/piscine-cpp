
#ifndef PLAYER_HPP
# define PLAYER_HPP

#include <iostream>
#include <curses.h>
#include "GameObj.hpp"
#include "Attack.hpp"

class Player : public GameObj
{
public:

	Player			(void);
	Player			(Player const & inst);
	virtual ~Player	(void);

    Attack *get_attack() const;

    void set_attack(Attack *_attack);

private:
    Attack *_attack;
};

#endif

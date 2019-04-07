
#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>
#include <curses.h>
#include "GameObj.hpp"

class Enemy : public GameObj
{
public:

	Enemy			(void);
	Enemy			(Enemy const & inst);
	virtual ~Enemy	(void);

    int get_index() const;

    void set_index(int _index);
	Enemy &			operator=(Enemy const & inst);
private:
    int _index;
};

#endif


#ifndef RENDER_HPP
# define RENDER_HPP

#include <iostream>
#include <curses.h>
#include <unistd.h>
#include "Enemy.hpp"
#include "Player.hpp"
#include "Attack.hpp"
#include "GameObj.hpp"

class Render
{
public:

	Render			(void);
	Render			(Render const & inst);
	Render			(int ww, int wh, int w1w, int w1h);
	virtual ~Render	(void);	

	Render &		operator=(Render const & inst);
	int				get_ww() const;
	int				get_wh() const;
	void			init_win();
	void			key_react();
	Enemy *			get_enemy()const{return _enemy;}
	Attack *		get_bullet() const{return _bullet;}
	Player *		get_player()const{return _player;}
private:

	int				_ww;
	int				_wh;
	int				_w1w;
	int				_w1h;
	size_t			_render_time;
	WINDOW *		_win_ptr;
	WINDOW *		_win1_ptr;
	Enemy *			_enemy;
	Attack *		_bullet;
	Player *		_player;

	void			move_enemy();
	void			shoot();
};

#endif


#ifndef GAMEOBJ_HPP
# define GAMEOBJ_HPP

#include <iostream>
#include <curses.h>

class GameObj
{
public:

	GameObj				(void);
	GameObj				(GameObj const & inst);
	GameObj				(int icon, int x,
	int	y);
	virtual ~GameObj	(void);	

	GameObj &			operator=(GameObj const & inst);
	int					get_icon() const;
	int					get_x() const;
	int					get_y() const;
	void				set_x(int new_x);
	void				set_y(int new_y);
	size_t				get_obj_time();
	void				set_obj_time(size_t cur_time);
protected:

	int					_icon;
	int					_x;
	int					_y;
	size_t				_obj_time;
	int					_speed;
};

#endif

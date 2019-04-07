
#include "../inc/GameObj.hpp"
#include <iostream>

GameObj::GameObj	(void) {}

GameObj::GameObj	(GameObj const & inst)
{
	*this = inst;
}

GameObj::GameObj			(int icon, int x, int y) :
_icon(icon), _x(x), _y(y) {}

GameObj::~GameObj	(void) {}

int					GameObj::get_icon() const
{
	return (this->_icon);
}

int					GameObj::get_x() const
{
	return (this->_x);
}

int					GameObj::get_y() const
{
	return (this->_y);
}

void				GameObj::set_x(int new_x)
{
	this->_x = new_x;
}
void				GameObj::set_y(int new_y)
{
	this->_y = new_y;
}

size_t			GameObj::get_obj_time()
{
	return (this->_obj_time);
}

void			GameObj::set_obj_time(size_t cur_time)
{
	this->_obj_time = cur_time;
}

GameObj &		GameObj::operator=(GameObj const & inst)
{
    this->_icon = inst.get_icon();
	this->_x = inst.get_x();
	this->_y = inst.get_y();
    return *this;
}

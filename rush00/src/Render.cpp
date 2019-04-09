
#include "../inc/Render.hpp"
#include <iostream>

Render::Render	(void) {}

Render::Render	(Render const & inst)
{
	*this = inst;
}

Render::Render	(int ww, int wh, int w1w, int w1h) :
_ww(ww), _wh(wh), _w1w(w1w), _w1h(w1h)
{
	std::cout << _ww;
	std::cout << _wh;
	std::cout << _w1w;
	std::cout << _w1h;
 	_enemy = new Enemy();
	_bullets = new AttackSourcePlayer();
	_player = new Player();
	this->init_win();
}

Render::~Render	(void) {}

Render &		Render::operator=(Render const & inst)
{
    this->_ww = inst.get_ww();
	this->_wh = inst.get_wh();
	// _enemy = new Enemy(*(inst.get_enemy()));
	// _bullets = new Attack(*(inst.get_bullets()));
	// _player = new Player(*(inst.get_player()));
    return *this;
}

int				Render::get_ww() const
{
	return (this->_ww);
}

int				Render::get_wh() const
{
	return (this->_wh);
}

void			Render::key_react()
{
	int ch = getch();
	int x = this->_player->get_x();
	int y = this->_player->get_y();
	if (ch == 27)
	{
		delwin(this->_win_ptr);
		delwin(this->_win1_ptr);
		exit (0);
	}
	else if (ch == KEY_DOWN || ch == KEY_UP ||
	ch == KEY_RIGHT || ch == KEY_LEFT)
	{
		if (ch == KEY_DOWN)
			y++;
		else if (ch == KEY_UP)
			y--;
		else if (ch == KEY_LEFT)
			x--;
		else if (ch == KEY_RIGHT)
			x++;
		if (x > 0 && x < _ww - 1)
			this->_player->set_x(x);
		if (y > 0 && y < _wh - 1)
			this->_player->set_y(y);
	}
	else if (ch == ' ')
	{	
		this->_bullets->set_x(this->_player->get_x());
		this->_bullets->set_y(this->_player->get_y());
		this->_bullets->set_obj_time(this->_render_time);
		this->shoot();
	}
}

void			Render::shoot()
{
	if (this->_render_time - this->_bullets->get_obj_time() >= 1000)
	{
		if (this->_bullets->get_x() < this->_ww - 2)
		{
			this->_bullets->set_x(this->_bullets->get_x() + 1);
			this->_bullets->set_obj_time(this->_render_time);
		}
		else
		{
			delete this->_bullets;
			this->_bullets = nullptr;
		}
	}
}

void			Render::move_enemy()
{
	if (this->_render_time - this->_enemy->get_obj_time() >= 10000)
	{
		this->_enemy->set_x(this->_enemy->get_x() - 1);
		this->_enemy->set_obj_time(this->_render_time);
		if (this->_enemy->get_x() == 1)
			this->_enemy->set_x(73);
	}
}

void			Render::init_win()
{
	initscr();
	noecho();
	cbreak();
	nodelay(stdscr, TRUE);
	keypad(stdscr, TRUE);
	curs_set(0);
	while (1)
	{
		this->_render_time = clock();
		this->_win_ptr = newwin(this->_wh, this->_ww, 0, 0);
		this->_win1_ptr = newwin(this->_w1h, this->_w1w,
		0, this->_ww);
		werase(this->_win_ptr);
		box(this->_win_ptr, 0, 0);
		box(this->_win1_ptr, 0, 0);
		this->key_react();
		mvwaddch(this->_win_ptr, this->_player->get_y(),
		this->_player->get_x(), this->_player->get_icon());
		this->move_enemy();
		// if (this->_bullets && (this->_bullets->get_x() || this->_bullets->get_y()))
		// 	shoot();
		mvwaddch(this->_win_ptr, this->_enemy->get_y(),
		this->_enemy->get_x() - 1, this->_enemy->get_icon());
		t_playerAttack *temp = _bullets->get_attacks();
		while (temp)
		{

			// if (this->_bullets)
				mvwaddch(this->_win_ptr, this->_bullets->get_y(),
				this->_bullets->get_x(), this->_bullets->get_icon());
		}
		wrefresh(this->_win_ptr);
		wrefresh(this->_win1_ptr);
		usleep(500);
	}
}

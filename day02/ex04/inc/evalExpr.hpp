#ifndef EVALEXPR_HPP
#define EVALEXPR_HPP
#include "Fixed.class.hpp"

typedef struct	s_list
{
	Fixed  *num;
	char op;
	struct s_list	*next;
}				t_list;

void push_head(t_list **head, Fixed *num, char op);
void push_tail(t_list **head, Fixed *num, char op);
void pop_head(t_list **head);
t_list *make_polish(std::string str);
#endif
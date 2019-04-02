#include "evalExpr.hpp"

void push_head(t_list **head, Fixed  *num, char op)
{
	t_list *temp;

	if (!*head)
	{
		*head = new t_list();
		(*head)->next = NULL;
		(*head)->num = num;
		(*head)->op = op;
	}
	else
	{
		temp = new t_list();
		temp->num = num;
		temp->op = op;
		temp->next = *head;
		*head = temp;
	}
}


void push_tail(t_list **head, Fixed  *num, char op)
{
	t_list *temp;

	if (!*head)
	{
		*head = new t_list();
		temp = *head;
	}
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = new t_list();
		temp = temp->next;
	}
	temp->num = num;
	temp->op = op;
	temp->next = NULL;
}

void pop_head(t_list **head)
{
	t_list *temp;

	if (!(*head))
		return ;
	temp = (*head)->next;
	delete *head;
	*head = temp;
}

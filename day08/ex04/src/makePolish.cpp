//
// Created by Dayrabekov Artem on 2019-04-13.
//

#include "functions.hpp"
#include <stack>

bool preceede(char op_prev, char op_now)
{
	if (op_prev == '(')
		return false;
	if (op_prev == '-' || op_prev == '+')
		return  (op_now == '-' || op_now == '+');
	return true;
}

void addOperator(Op* oper, 	std::stack<Token *> &operators, std::queue<Token *> &res)
{
	if (!operators.empty() && operators.top()->isOp())
	{
		while (!operators.empty() && operators.top()->isOp() && preceede(dynamic_cast<Op*>(operators.top())->getOp(), oper->getOp()))
		{
			res.push(new Op(dynamic_cast<Op*>(operators.top())->getOp()));
			operators.pop();
		}
	}
	operators.push(new Op(*oper));

}

void doPar(Token *p, std::stack<Token *> &operators, std::queue<Token *> &res)
{
	if (p->isOpen())
		operators.push(new Par(p));
	else
	{
		while (!operators.empty() && !operators.top()->isOpen())
		{
			res.push(operators.top());
			operators.pop();
		}
		if (operators.empty())
			throw Token::NoOpenBracketException();
		else
			operators.pop();
	}
}

std::queue<Token *> makePolish(std::queue<Token *> tokens)
{
	std::queue<Token *>res;
	std::stack<Token *>operators;

	while (!tokens.empty())
	{
		if (tokens.front()->isNum())
			res.push(tokens.front());
		else if (tokens.front()->isOp())
			addOperator(dynamic_cast<Op*>(tokens.front()), operators, res);
		else
			doPar(tokens.front(), operators, res);
		tokens.pop();
	}
	while (!operators.empty())
	{
		if (operators.top()->isOpen())
			throw Token::NoClosingBracketException();
		res.push(operators.top());
		operators.pop();
	}
	return res;
}
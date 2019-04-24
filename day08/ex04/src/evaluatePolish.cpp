//
// Created by Dayrabekov Artem on 2019-04-13.
//

#include "functions.hpp"
#include <stack>
#include <iomanip>


void printStack(std::stack<Num *>nums)
{
	std::cout << "| ST";
	while (!nums.empty())
	{
		std::cout << " " << nums.top()->getNum();
		nums.pop();
	}
	std::cout << "]" << std::endl;
}

void doOperation(std::stack<Num *>&nums, Op *o)
{
	if (nums.empty())
		throw Token::OperatorsOverflowException();
	int a = nums.top()->getNum();
	nums.pop();
	if (nums.empty())
		throw Token::OperatorsOverflowException();
	int b = nums.top()->getNum();
	nums.pop();
	std::cout << "I "  << std::left << std::setw(10) << o->getName();
	std::cout << "| OP "  << std::left << std::setw(10) << o->getOpName();
	char op = o->getOp();
	if (op == '+')
		nums.push(new Num (b + a));
	if (op == '-')
		nums.push(new Num (b - a));
	if (op == '*')
		nums.push(new Num (b * a));
	if (op == '/')
	{
		if (a == 0)
			throw Token::ZeroDivisionException();
		nums.push(new Num(b / a));
	}
	printStack(nums);
}

void pushNum(std::stack<Num*> &nums, int n)
{
	nums.push(new Num(n));
	std::cout << "I "<< std::left << std::setw(10) << nums.top()->getName();
	std::cout << std::left << std::setw(15) << "| OP Push";
	printStack(nums);
}

int evaluatePolish(std::queue <Token *> tokens)
{
	std::stack <Num*> nums;

	while (!tokens.empty())
	{
		if (tokens.front()->isNum())
			pushNum(nums, dynamic_cast<Num*>(tokens.front())->getNum());
		else
			doOperation(nums, dynamic_cast<Op*>(tokens.front()));
		tokens.pop();
	}
	if (nums.empty())
		throw Token::EmptyLineException();
	int res = nums.top()->getNum();
	nums.pop();
	if (!nums.empty())
		throw Token::NumbersOverflowException();
	return res;
}
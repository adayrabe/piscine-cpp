#include "Human.hpp"

int main()
{
	Human a = Human();
	Human b = Human();
	a.action("rangedAttack", "Harry");
	b.action("intimidatingShout", "Ron");
	return (0);
}
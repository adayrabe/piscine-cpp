#include "Pony.hpp"

static void ponyOnTheHeap(void)
{
	Pony *pony = new Pony("Josh", 3, "brown");
	pony->talk();
	delete pony;
}

static void ponyOnTheStack(void)
{
	Pony pony = Pony("Matt", 5, "grey");
	pony.talk();
}

int main()
{
	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}
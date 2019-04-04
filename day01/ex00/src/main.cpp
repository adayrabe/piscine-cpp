#include "Pony.hpp"

static void ponyOnTheHeap(void)
{
	Pony *pony = new Pony("Josh", 3, "brown");
	std::cout << "I am a pony on the heap" << std::endl;
	pony->talk();
	delete pony;
}

static void ponyOnTheStack(void)
{
	Pony pony = Pony("Matt", 5, "grey");
	std::cout << "I am a pony on the stack" << std::endl;
	pony.talk();
}

int main()
{
	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}
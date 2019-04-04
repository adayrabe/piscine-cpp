#include "Logger.hpp"

int main()
{
	Logger a = Logger("src");
	Logger b = Logger("Temp2");
	a.log("logToConsole", "Hello");
	a.log("logToFile", "Ok");
	a.log("logToFile", "Hi");
	b.log("logToConsole", "World");
	b.log("logToFile", "Some");
	b.log("logToFile", "thing");
	return (0);
}
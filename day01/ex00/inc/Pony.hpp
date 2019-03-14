#ifndef PONY_HPP
#define PONY_HPP

#include <iostream>
#include <string>

class Pony
{
	public:

		Pony(void);
		Pony(std::string name, int age, std::string color);
		~Pony(void);
		std::string getName(void) const;
		int getAge(void) const;
		std::string getColor(void) const;
		void talk(void);

	private:

		std::string _name;
		int _age;
		std::string _color;
};

#endif

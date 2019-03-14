#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain
{
	public:

		Brain(void);
		Brain(unsigned long neurons, unsigned int volume, unsigned int age);
		~Brain(void);
		std::string identify(void) const;
		unsigned long getNeurons() const;
		unsigned long getVolume() const;
		unsigned long getAge() const;
	private:

		unsigned long _neurons;
		unsigned int _volume;
		unsigned int _age;

};

#endif

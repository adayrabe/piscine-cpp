#include "Brain.hpp"
#include <sstream>

Brain::Brain(void)
{
	std::cout << "A brain has been created" << std::endl;
	return ;
}

Brain::Brain(unsigned long neurons, unsigned int volume, unsigned int age):
		_neurons(neurons), _volume(volume), _age(age)
{
	std::cout << "A brain has been created" << std::endl;
	return ;
}

Brain::~Brain(void)
{
	std::cout << "A brain has been destroyed" << std::endl;
	return ;
}

unsigned long Brain::getNeurons() const
{
	return (this->_neurons);
}
unsigned long Brain::getVolume() const
{
	return (this->_volume);
}

unsigned long Brain::getAge() const
{
	return (this->_age);
}

std::string Brain::identify(void) const
{
	std::stringstream temp;

	temp << this;
	return (temp.str());
}

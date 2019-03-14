#include "Human.hpp"
Human::Human(void):_brain()
{
	std::cout << "A Human has been created" << std:: endl;
	return ;
}

Human::~Human(void)
{
	std::cout << "A Human has been destroyed" << std:: endl;
	return ;
}

std::string Human::identify(void) const
{
	return (this->_brain).identify();
}

const Brain& Human::getBrain(void) const
{
	return (this->_brain);
}

#include "Human.hpp"

Human::Human(void)
{
	std::cout << "A human has been created" << std::endl;
	return ;
}

Human::~Human(void)
{
	std::cout << "A human has been destroyed" << std::endl;
	return ;
}

void Human::meleeAttack(std::string const &target)
{
	std::cout << "Melee attacking at " << target << std::endl;
	return ;
}

void Human::rangedAttack(std::string const &target)
{
	std::cout << "Range attacking at " << target << std::endl;
	return ;
}

void Human::intimidatingShout(std::string const &target)
{
	std::cout << "Shouting at " << target << std::endl;
	return ;
}

void Human::action(std::string const &action_name, std::string const &target)
{
	size_t num;

	std::string func_names[] = {"meleeAttack", "rangedAttack", "intimidatingShout"};
	void (Human::*function[])(std::string const &) = 
	{ &Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout };

	for (num = 0; num < sizeof(func_names) / sizeof(std::string); num++)
	{
		if (!func_names[num].compare(action_name))
			break ;
	}
	if (num < sizeof(func_names) / sizeof(std::string))
		(this->*function[num])(target);
	else
		std::cout << "Wrong function" << std::endl;
	return ;
}
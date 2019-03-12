#include <iostream>

const char *ft_to_upper(char *str)
{
	for(int i = 0; str[i]; i++)
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	return (str);
}

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		for(int i = 1; i < ac; i++)
			std::cout << ft_to_upper(av[i]);
	std::cout << std::endl;
	return 0;
}
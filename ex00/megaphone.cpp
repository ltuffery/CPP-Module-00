#include <cctype>
#include <cstring>
#include <iostream>

char	toUpper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

int	main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < ac; i++) {
		for (size_t j = 0; j < std::strlen(av[i]); j++) {
			std::cout << toUpper(av[i][j]);
		}
	}
	std::cout << std::endl;
}

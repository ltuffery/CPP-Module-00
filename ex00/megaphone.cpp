#include <cstring>
#include <iostream>

int	main(int ac, char **av)
{
	for (int i = 1; i < ac; i++) {
		for (size_t j = 0; j < std::strlen(av[i]); j++)
		{
			if (av[i][j] >= 'a' && av[i][j] <= 'z')
				std::cout << char(av[i][j] - 32);
			else
			 	std::cout << av[i][j];

		}
		if (i + 1 != ac)
			std::cout << " ";
	}
	std::cout << std::endl;
}

#include <stdlib.h>
#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		write(1, "\n", 1);
		exit(EXIT_FAILURE);
	}
	if (av[2][1] != '\0' || av[3][1] != '\0')
	{
		write(1, "\n", 1);
		exit(EXIT_FAILURE);
	}
	while (*av[1])
	{
		if (*av[1] == *av[2])
			write(1, av[3], 1);
		else
			write(1, av[1], 1);
		av[1]++;
	}
	write(1, "\n", 1);
	exit(EXIT_SUCCESS);
}

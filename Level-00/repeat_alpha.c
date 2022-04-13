#include <unistd.h>

int main(int ac ,char **av)
{
	if (ac == 2)
	{
		int i;
		i = 0;
		while ( av[1][i] != '\0')
		{
			write(1, &av[1][i], 1);
			int j = 0;
			while ( j < i)
			{
				write(1, &av[1][i], 1);
				j++;
			}
			i++;
		}
		write(1, "\n", 1);
	}
}

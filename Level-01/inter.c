#include<unistd.h>

int check1(char *str, char c, int index)
{
	int x = 0;
	while (x < index)
	{
		if (str[x] == c)
		{
			return (0);
		}
		x++;
	}
	return (1);
}

int main(int ac ,char **av)
{
	int i = 0;
	while (av[1][i])
	{
		int j = 0;
		while (av[2][j])
		{
			if (av[1][i] == av[2][j])
			{
				if (check1(av[1], av[1][i], i) == 1)
				{
					write(1, &av[1][i], 1);
					break;
				}
			}
			j++;
		}
		i++;
	}
}

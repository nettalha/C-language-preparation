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
int check2(char *str, char c)
{
	int x = 0;
	while (str[x])
	{
		if(str[x] == c)
		{
			return (0);
		}
		x++;
	}
	return(1);
}
int main(int ac ,char **av)
{
	int i;
	i = 0;
	while (av[1][i])
	{

			if (check1(av[1], av[1][i], i) == 1)
			{
				write(1, &av[1][i], 1);
			}
			i++;
	}
	i = 0;
	while (av[2][i])
	{
		if (check2(av[1], av[2][i]) == 1)
		{
			if (check1(av[2], av[2][i], i) == 1)
			{
				write(1, &av[2][i], 1);
			}
		}
		i++;
	}

}

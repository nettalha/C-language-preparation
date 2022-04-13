#include <unistd.h>

char    *ft_strcpy(char *des, char *src)
{
	int i;
	i = 0;
	while (src[i] != '\0' )
	{
		des[i] = src[i];
		i++;
	}
	des[i] = '\0';
	return (des);
}

int main ()
{
	char src[] = "Hello World";
	char des[] = "";
	ft_strcpy(des, src);
	int i;
	i = 0;
	while (des[i] != '\0')
	{
		write(1, &des[i], 1);
		i++;
	}
}

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return(s1[i] - s2[i]);
}

int main ()
{
	char s1[] = "aBC";
	char s2[] = "AbC";
	int x;
	int y;
	x = ft_strcmp(s1,s2);
	y =	strcmp(s1,s2);
	printf("%d\n",x);
	printf("%d",y);
}

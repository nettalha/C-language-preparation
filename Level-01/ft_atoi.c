#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str)
{
	int i = 0;
	int sign = 1;
	int res = 0;
	while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign*=-1;
		i++;

	}
	else if(str[i]=='+')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		res*=10;
		res+=str[i] -48;
		i++;
	}
	return (res * sign);
}

int main()
{
	printf("%d",ft_atoi("   -kjh123gbg564"));
}

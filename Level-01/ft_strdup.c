#include <stdlib.h>

int ft_strlen(char *str)
	{
		int i = 0;
		while (str[i])
		{
			i++;
		}
		return (i);
	}

char	*ft_strdup(char *src)
{
	int i = 0;
	char  *arr;
	arr = (char*) malloc(ft_strlen(src) * sizeof(char) + 1);
	if (!arr)
	{
		return (NULL);
	}
	while (src[i])
	{
		arr[i] = src[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

#include <stdlib.h>
char *ft_strjoin(int size, char **strs, char *sep)
{
	char	*concatenation;
	int	i;

	i = 0;
	concatenation = malloc(size * int);  
	if (size <= 0)
	{
		concatenation[0] = '\0'
		return (concatenation);
	}
	while (i < size)
	{
		ft_strcat(concatenation[i], strs[i]);
		i++;
		concatenation[i] = '\0';
	}
	return (concatenation);
}

ft_strcat(char *concatenation, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		concatenation[i] = str[i];
		i++;
	}
}

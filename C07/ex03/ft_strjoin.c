#include <stdlib.h>
char *ft_strjoin(int size, char **strs, char *sep)
{
	char	*concatenation;
	int	i;
	int	*count;

	count = 0;
	i = 0;
	concatenation = malloc(size * int);  
	if (size <= 0)
	{
		concatenation[0] = '\0';
		return (concatenation);
	}
	while (i < size)
	{
		ft_strcat(concatenation[i], strs[i]);
		i++;
		concatenation[i] = sep;
	}
	return (concatenation);
}

ft_strcat(char *concatenation, char *str, int *count)
{
	int	j;

	j= 0;
	while (str[count])
	{
		concatenation[count] = str[j];
		count++;
		j++;
	}
	concatenation[j] = '\0';
}

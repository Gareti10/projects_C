#include <stdlib.h>
int	ft_strlen (char *str);

char	*ft_strdup(char *str)
{
	if (!str)
		return (NULL);
	int	size;
	int	i;
	char	*dest;

	size = ft_strlen(str);
	dest = malloc(size + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (str[i])
	{
		dest [i] = str[i]; 
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
#include<stdio.h>
int	main (void)
{
	char	*dest;
	dest = ft_strdup("Hello, word!");
	if (dest)
	{	
		printf("%s", dest);
		free (dest);
	}
	else
		printf("Error!");
	return (0);
}

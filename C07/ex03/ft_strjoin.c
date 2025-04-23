#include <stdlib.h>

void	ft_sep(char *concatenation,char *sep,int *count);
char	*ft_strjoin(int size, char **strs, char *sep);
int     ft_seplen(char *sep);
int     ft_strlen(int size, char **strs);
void    ft_strcat(char *concatenation, char *str, int *count);

char    *ft_strjoin(int size, char **strs, char *sep)
{
	char	*concatenation;
	int	j;
	int	count;
	int	result;

	result = 0;
	count = 0;
	j = 0;

	if (size <= 0)
	{
		concatenation = malloc(1);
		if (concatenation)
			concatenation[0] = '\0';
		return (concatenation);
	}
	result = ft_strlen(size, strs) + (ft_seplen(sep) * (size - 1));
	concatenation = malloc((result + 1) * (sizeof(char)));  
	if (!concatenation)
		return NULL;
	while (j < size)
	{
		ft_strcat(concatenation, strs[j], &count);
		if (j < size - 1)
			ft_sep(concatenation, sep, &count);
		j++;
	}
	concatenation[count] = '\0';
	return (concatenation);
}

void	ft_strcat(char *concatenation, char *str, int *count)
{
	int	j;

	j= 0;
	while (str[j])
	{
		concatenation[*count] = str[j];
		j++;
		(*count)++;
	}
}

int	ft_strlen(int size, char **strs)
{
	int	i;
	int	j;
	int	result;

	result = 0;
	i = 0;
	j = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			j++;	
		}
		result = result + j;
		i++;
	}
	return (result);
}
int	ft_seplen(char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
		i++;
	return (i);

}

void	ft_sep(char *concatenation,char *sep,int *count)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		concatenation[*count] = sep[i];
		i++;
		(*count)++;	
	}
}

#include <stdio.h>
#include <stdlib.h>

void    ft_sep(char *concatenation, char *sep, int *count);
char    *ft_strjoin(int size, char **strs, char *sep);
int     ft_seplen(char *sep);
int     ft_strlen(int size, char **strs);
void    ft_strcat(char *concatenation, char *str, int *count);

int main()
{
    char *strs[] = {
        "Hello",
        "world",
        "this",
        "is",
        "a",
        "test"
    };
    char *sep = ", ";
    int size = 6;

    char *result = ft_strjoin(size, strs, sep);

    if (result)
    {
        printf("Resultado: %s\n", result);
        free(result);  // Não se esqueça de liberar a memória após o uso
    }
    else
    {
        printf("Erro ao alocar memória!\n");
    }

    return 0;
}


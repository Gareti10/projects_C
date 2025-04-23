#include <stdio.h>
#include <stdlib.h>
int	*ft_range(int min, int max)
{
	int	i;

	i = 0;
	if (!min || !max)
		return (NULL); 

	int *array; 
	
	array = malloc((max - min) * sizeof(int));
	if(!array)
		return (NULL);
	if (min >= max)
	{
		return (NULL);
	}
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
int	main()
{
	int	*vetor;
	int	i;
	int min;
	int	max;

	min = 3;
	max = 9;
	i = 0;
	vetor = ft_range(min, max);
	while (min < max)
	{
		printf("%d" , vetor[i]);
		i++;
		min++;
	}
	printf("\n");
	free (vetor);

}

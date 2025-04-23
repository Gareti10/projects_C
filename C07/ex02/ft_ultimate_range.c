#include <stdio.h>
#include <stdlib.h>
int  ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int *array;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return(0);
	}	
	array = malloc ((max - min) * sizeof(int));
	if (!array)
		return (-1);
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;	
	}
	*range = array;
	return (i);
}

int main(void)
{
    int *array; // Esse ponteiro vai receber o array criado pela função
    int size;
    int i;

    int min = 13;
    int max = 100;

    size = ft_ultimate_range(&array, min, max);

    if (size == -1)
    {
        printf("Erro na alocação de memória.\n");
        return (1);
    }
    else if (size == 0)
    {
        printf("Intervalo inválido: min >= max.\n");
    }
    else
    {
        printf("Array gerado com %d elementos:\n", size);
        for (i = 0; i < size; i++)
        {
            printf("%d ", array[i]);
        }
        printf("\n");

        // Libera a memória alocada
        free(array);
    }

    return (0);
}


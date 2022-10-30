#include<stdlib.h>
#include "main.h"
/**
 * *array_range - Creates an array of an integers
 * @min: Minimum value of an array
 * @max: Max size of an array
 * Return: Returns a pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i, size, *ptr;

	if (min > max)
	{
		return (NULL);
	}

	size = (max - min) + 1;
	ptr = (int *)malloc(size *sizeof(int));
		if (ptr == NULL)
		{
			return(NULL);
		}
		i = 0;
		while (i < size)
		{
			ptr[i] = min;
			i = i + 1;
			min = min + 1;
		}
	return (ptr);
}

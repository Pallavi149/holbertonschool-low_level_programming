#include<stdlib.h>
#include "main.h"

/**
 * **alloc_grid - Returns a pointer to a 2 dimensional array of integers
 * @width: width of an array
 * @height: Height of an array
 * Return: Returns a pointer to 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int **ptr, i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ptr = (int **)malloc(height * sizeof(int *));
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < height)
	{
		ptr[i] = (int *)malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			while (i > 0)
			{
				free(ptr[i - 1]);
				i = i - 1;
			}
			free(ptr);
			return (NULL);
		}
		j = 0;
		while (j < width)
		{
			ptr[i][j] = 0;
			j = j + 1;
		}
		i = i + 1;
	}
	return (ptr);
}

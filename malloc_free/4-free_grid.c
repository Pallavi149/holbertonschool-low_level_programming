#include<stdlib.h>
#include "main.h"

/**
 * free_grid -  frees a 2 dimensional grid
 * @grid: Address of the two dimensional grid
 * @height: Height of an array
 * Return: Returns nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i = i + 1;
	}
	free(grid);
}

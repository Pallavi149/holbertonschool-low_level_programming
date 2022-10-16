#include"main.h"
#include <stdio.h>

/**
*print_diagsums - prints the sum of the two diagonals of a square matrix
*@a: matrix of integers
*@size: size of matrix
*/
void print_diagsums(int *a, int size)
{
	int i = 0, j = 0,  sum1 = 0, sum2 = 0, len = size * size;

	while (i < len)
	{
		sum1 = sum1 + a[i + j];
		sum2 = sum2 + a[i + size - 1 - j];
		i = i + size;
		j = j + 1;
	}
	printf("%d, %d\n", sum1, sum2);
}

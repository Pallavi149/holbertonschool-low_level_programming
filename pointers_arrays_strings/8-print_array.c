#include"main.h"
#include<stdio.h>

/**
 *print_array - prints an array of an integer
 *@n: n is the number of elements of the array to be printed
 *@a: an array of integers
 *
 *Return: Always 0
 */

void print_array(int *a, int n)
{
	int i  = 0;

	while (i < n)
	{
	printf("%d", *(a + i));
	if (i < (n - 1))
	{
	printf(", ");
	}
	i++;
	}
	printf("\n");
}

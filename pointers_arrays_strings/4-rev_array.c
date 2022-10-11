#include"main.h"
#include<stdio.h>

/**
 *reverse_array - prints reverse array of an integer
 *@n: n is the number of elements of the array to be printed
 *@a: an array of integers
 *
 *Return: Always 0
 */

void reverse_array(int *a, int n)
{
	int i  = 0;

	while (i <= n / 2)
	{
		int temp = a[i];

		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
		i++;
	}
}

#include<stdio.h>
#include<stdlib.h>
#include"function_pointers.h"
/**
 * int_index - Function that searches for an integer
 * @array: pointer to an array of int
 * @size: No.of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: index of the first element
 * for which the cmp function does not return 0
 * -1 if no element matches and size is less than 0
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, return_cmp;

	if (array == NULL)
	{
		return (-1);
	}
	if (cmp == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		(return_cmp = cmp(array[i]));
		if (return_cmp != 0)
		{
		return (i);
		}
		i = i + 1;
	}
	return (-1);
}

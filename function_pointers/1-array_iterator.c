#include<stdio.h>
#include<stdlib.h>
#include"function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter on
 *each element of an array
 * @array: pointer to an array of int
 * @size: No.of elements in an array
 * @action: Function pointer
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		exit(0);
	}
	i = 0;
	while (i < size)
	{
		action(array[i]);
		i = i + 1;
	}
}

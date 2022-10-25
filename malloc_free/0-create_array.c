#include <stdlib.h>
#include "main.h"

/**
 * *create_array - Creates an array of chars
 * @size: Size of an array
 * @c: The character which we are displaying in the array
 * Return: Returns a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = (char *)malloc(size * sizeof(*ptr));
	if (ptr == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		ptr[i] = c;
		i = i + 1;
	}
	return (ptr);
}

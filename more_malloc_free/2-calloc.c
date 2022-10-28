#include<stdlib.h>
#include"main.h"

/**
 **_calloc - Allocates memory for an array, using malloc
 *@nmemb: Number of elements
 *@size: size of one element
 *Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = (void *)malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}

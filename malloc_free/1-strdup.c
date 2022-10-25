#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter
 * @str: Char Pointer
 * Return: Returns a pointer which contains a copy of the string
 *given as a parameter
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int i, strlen;

	strlen = 0;
	while (str[strlen] != '\0')
	{
		strlen = strlen + 1;
	}
	ptr = (char *)malloc(strlen * sizeof(*ptr));
	if (ptr == NULL)
	{
		return (NULL);
	}
	if (*str == '\0')
	{
		return (NULL);
	}
	i = 0;
	while (i < strlen)
	{
		ptr[i] = str[i];
		i = i + 1;
	}
	return (ptr);
}

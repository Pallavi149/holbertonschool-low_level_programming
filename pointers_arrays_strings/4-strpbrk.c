#include"main.h"
#include <stddef.h>

/**
*_strpbrk - gets the length of a prefix substring
*@str: string
*@accept: list of characters
*Return: the pointer
*/
char *_strpbrk(char *str, char *accept)
{
	int j = 0;

	while (*str != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (*str == accept[j])
			{
				return (str);
			}
			j = j + 1;
		}
		str = str + 1;
	}
	return (NULL);
}

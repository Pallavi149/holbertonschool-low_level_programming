#include"main.h"

/**
*_strcmp - Compares two string
*@s1: First string
*@s2: second string
*
*Return: Always 0
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}

	if (*s1 == '\0')
	{
		return (-(*s2));
	}
	if (*s2 == '\0')
	{
		return (*s1);
	}

	return (*s1 - *s2);
}

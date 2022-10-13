#include"main.h"

/**
*_strspn - gets the length of a prefix substring
*@str: string
*@accept: list of characters
*Return: the number of bytes
*/
unsigned int _strspn(char *str, char *accept)
{
	int i = 0, j = 0, len = 0;
	unsigned int r = 0;

	while (accept[len] != '\0')
	{
		len = len + 1;
	}

	while (str[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (str[i] == accept[j])
			{
				r = r + 1;
				break;
			}
			j = j + 1;
		}
		if (j >= len)
		{
			break;
		}
		i = i + 1;
	}
	return (r);
}

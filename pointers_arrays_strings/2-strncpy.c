#include"main.h"

/**
**_strncpy - Copy string
*@dest: destinating string
*@src: source string
*@n: number of bytes
*
*Return: dest pointer
*/

char *_strncpy(char *dest, char *src, int n)
{
	int len = 0, i = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	while (*src && n > 0)
	{
		dest[i] = *src;
		src++;
		i++;
		n--;
	}
	if (n > 0)
	{
		while (i < len)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}

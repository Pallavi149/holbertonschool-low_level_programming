#include"main.h"

/**
**_strncat - Concatenates two string
*@dest: destinating string
*@src: source string
*@n: number of bytes
*
*Return: dest pointer
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (*src && n > 0)
	{
		dest[i] = *src;
		src++;
		i++;
		n--;
	}
	dest[i] = '\0';
	return (dest);
}

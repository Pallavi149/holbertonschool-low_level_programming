#include"main.h"

/**
**_strcat - Concatenates two string
*@dest: destinating string
*@src: source string
*
*Return: Always 0
*/

char *_strcat(char *dest, char *src)
{
	int i = 0;
	
	while (dest[i] != '\0')
	{
		i++;
	}
	while (*src)
	{
		dest[i] = *src;
		src++;
		i++;
	}
	dest[i] = '\0';
	return dest;
}

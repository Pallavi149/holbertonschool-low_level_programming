#include"main.h"

/**
**_strcpy - Copy string
*@dest: destinating string
*@src: source string
*
*Return: dest pointer
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*src)
	{
		dest[i] = *src;
		src++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

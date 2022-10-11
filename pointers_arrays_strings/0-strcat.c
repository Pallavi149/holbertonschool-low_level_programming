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
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return dest;
}

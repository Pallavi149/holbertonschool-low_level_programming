#include"main.h"
#include<string.h>
/**
* *_memcpy - copies memory area
*@dest: destination string
*@src: source string
*@n: Byes of memory
*Return: return the dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

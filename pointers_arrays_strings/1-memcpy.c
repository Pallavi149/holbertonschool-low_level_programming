#include"main.h"
#include<string.h>
/**
* *_memcpy - copies memory area
*@dest: destination string
*@src: source string
*@n: Byes of memory
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *d = (char *)dest;
	char *s = (char *)src;


	for (i = 0; i < n; i++)
	{
		d[i] = s[i];
	}
	return (dest);
}

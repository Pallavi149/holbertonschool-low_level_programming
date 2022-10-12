#include"main.h"
#include<string.h>
/**
* *_memset - Fills a memory with a constant byte
*@s: pointer to memory area
*@b: constant byte
*@n: Byes of memory area
*Return: return pointer to the memory area
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

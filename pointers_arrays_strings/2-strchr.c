#include"main.h"
#include<string.h>
/**
* *_strchr - Locates a character in a string
*@s: source string
*@c: character to find
*Return: return the string
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}

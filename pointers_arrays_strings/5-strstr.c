#include"main.h"
#include <stddef.h>

/**
*_strstr - locates the substring
*@haystack: string
*@needle: list of characters
*Return: the pointer or NULL
*/
char *_strstr(char *haystack, char *needle)
{
	int j = 0, len = 0;

	while (needle[len] != '\0')
	{
		len = len + 1;
	}

	while (*haystack != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
		{
			if (*(haystack + j)  != needle[j])
			{
				break;
			}
			j = j + 1;
		}

		if (j == len)
		{
			return (haystack);
		}
		haystack = haystack + 1;
	}
	return (NULL);
}

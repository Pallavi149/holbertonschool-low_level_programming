#include <stdlib.h>
#include "main.h"

/**
 * _strlen - string length
 * @str: string
 * Return: Returns length of a string, 0 if string is NULL
 */

int _strlen(char *str)
{
	int len;

	if (str == NULL)
	{
		return (0);
	}

	len = 0;
	while (str[len] != '\0')
	{
		len = len + 1;
	}
	return (len);
}

/**
 * _strcpy - String copying
 * @str: string
 * @len: string length
 * @ptr: pointer to copy the string
 * @startindex: start index
 */
void _strcpy(char *str, int len, char *ptr, int startindex)
{
	int i;

	i = 0;
	if (str != NULL)
	{
		while (i < len)
		{
			ptr[i + startindex] = str[i];
			i = i + 1;
		}
	}
}

/**
 * *str_concat - concatenates two strings
 * @s1: Fist String
 * @s2: Second string
 * @n: Number of bytes to copy
 * Return: Returns a pointer which concatenates two strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int len1, len2, strlen;

	len1 = _strlen(s1);

	len2 = _strlen(s2);

	strlen = len1 + len2;
	ptr = (char *)malloc((strlen + 1) * sizeof(*ptr));
	if (ptr == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL && s2 == NULL)
	{
		*ptr = '\0';
		return (ptr);
	}
	_strcpy(s1, len1, ptr, 0);
	if (((int)n) <= len2)
	{
		len2 = n;
	}
	_strcpy(s2, len2, ptr, len1);
	ptr[strlen] = '\0';
	return (ptr);
}

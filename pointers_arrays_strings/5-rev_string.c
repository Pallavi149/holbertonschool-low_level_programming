#include"main.h"

/**
*rev_string - Prints a reverse string
*@s: string
*
*Return: Always 0
*/

void rev_string(char *s)
{
	int l = 0, i = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}

	s = s - l;

	while (i < l / 2)
	{
		char temp = s[i];

		s[i] = s[l - i - 1];
		s[l - i - 1] = temp;
		i++;
	}
}

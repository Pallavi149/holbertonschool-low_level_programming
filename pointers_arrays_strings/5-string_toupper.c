#include"main.h"

/**
**string_toupper - changes all lowercase letters to uppercase
*@str: string
*Return: string with uppercase letters
*/
char *string_toupper(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
		{
			*(str + i) = *(str + i) - 32;
		}
		i++;
	}
	return (str);
}
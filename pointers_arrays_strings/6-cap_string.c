#include"main.h"

/**
**cap_string - capitalizes all words of a string
*@str: string
*Return: string with capitalized all words
*/
char *cap_string(char *str)
{
	int i = 0, j = 0;
	char *sep = " \t\n,;.!?\"(){}";

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
			{
				str[i] = str[i] - 32;
			}
			else
			{
				j = 0;
				while (sep[j] != '\0')
				{
					if (str[i - 1] == sep[j])
					{
						str[i] = str[i] - 32;
						break;
					}
					j = j + 1;
				}
			}
		}
		i = i + 1;
	}
	return (str);
}

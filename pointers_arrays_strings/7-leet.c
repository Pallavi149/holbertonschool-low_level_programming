#include"main.h"
/**
**leet - encodes a string into 1337
*@s: string to encode
*
*Return: pointer
*/

char *leet(char *s)
{
	char upper_letters[] = "AEOTL";
	char lower_letters[] = "aeotl";
	char number_letters[] = "43071";
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (upper_letters[j] != '\0')
		{
			if (s[i] == upper_letters[j] ||
			     s[i] == lower_letters[j])
			{
				s[i] = number_letters[j];
			}
			j = j + 1;
		}
		i = i + 1;
	}
	return (s);
}

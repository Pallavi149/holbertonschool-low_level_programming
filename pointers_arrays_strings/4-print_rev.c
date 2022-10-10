#include"main.h"
/**
*print_rev - Prints a reverse string
*@s: string
*
*Return: Always 0
*/

void print_rev(char *s)
{
	int i, l = 0;

while (*s != '\0')
{
l++;
s++;
}
i = l;
while (i >= 0)
{
	_putchar(*(s--));
	i--;
}
_putchar('\n');
}

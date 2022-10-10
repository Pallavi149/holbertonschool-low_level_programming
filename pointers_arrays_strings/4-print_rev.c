#include"main.h"
/**
*print_rev - Prints a reverse string
*@s: string
*
*Return: Always 0
*/

void print_rev(char *s)
{
	int l = 0;

while (*s != '\0')
{
l++;
s++;
}
s--;
l--;
while (l >= 0)
{
	_putchar(*(s--));
	l--;
}
_putchar('\n');
}

#include"main.h"
/**
*print_alphabet - Printing alphabets in lower case
*
*Return: Always return 0
*/

void print_alphabet(void)
{
int i;

i = 'a';
while (i <= 'z')
{
	_putchar(i);
	i++;
}
_putchar('\n');
}

#include"main.h"
/**
*print_numbers - Printing alphabets in lower case
*
*Return: Always return 0
*/

void print_numbers(void)
{
int i;

i = '0';
while (i <= '9')
{
	_putchar(i);
	i++;
}
_putchar('\n');
}

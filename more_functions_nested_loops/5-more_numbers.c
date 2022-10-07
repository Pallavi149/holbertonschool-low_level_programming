#include"main.h"
/**
*more_numbers -  prints 0 to 14 10 times
*
*Return: Always return 0
*/

void more_numbers(void)
{
int i, p;
p = 0;
while (p <= 9)
{
i = 0;
while (i <= 14)
{
if (i >= 10)
{
_putchar((char) (i / 10 + '0'));
}
_putchar((char)i % 10 + '0');
i++;
}
_putchar('\n');
p++;
}
}

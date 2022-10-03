#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
*main - display all the numbers of base 16 in lowercase using putchar function
*
*Return: always 0 at all time
*/

int main(void)
{
	int x, y;

	for (x = '0'; x <= '9'; x++)
	{
	putchar(x);
	}
	for (y = 'a'; y <= 'f'; y++)
	{
	putchar(y);
	}
	putchar('\n');
	return (0);
}

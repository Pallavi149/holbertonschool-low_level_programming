#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
*main - display lowercase alphabet in reverse using putchar function
*
*Return: always 0 at all time
*/

int main(void)
{
	int x;

	for (x = 'z'; x >= 'a'; x--)
	{
	putchar(x);
	}
	putchar('\n');
	return (0);
}

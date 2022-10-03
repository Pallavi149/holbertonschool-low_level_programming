#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
*main - display lowercase letters, except q and e, using putchar function
*
*Return: always 0 at all time
*/

int main(void)
{
	int x, y;

	for (x = 'A'; x <= 'Z'; x++)
	{
	y = tolower(x);
	if (y != 'e' && y != 'q')
	putchar(y);
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
*main - display lowercase letters using putchar function
*
*Return: always 0 at all time
*/

int main(void)
{
	int x, y;

	for (x = 'A'; x <= 'Z'; x++)
	{
	y = tolower(x);
	putchar(y);
	}
	putchar('\n');
	return (0);
}

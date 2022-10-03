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
	int x, y, p, q;

	for (x = 'A'; x <= 'Z'; x++)
	{
	y = tolower(x);
	putchar(y);
	}
	for (p = 'a'; p <= 'z'; p++)
	{
	q = toupper(p);
	putchar(q);
	}
	putchar('\n');
	return (0);
}

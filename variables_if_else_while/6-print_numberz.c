#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
*main - prints all single digit numbers of base 10 starting from 0,
* using putchar function
*
*Return: always 0 at all time
*/

int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
	putchar(x);
	}
	putchar('\n');
	return (0);
}

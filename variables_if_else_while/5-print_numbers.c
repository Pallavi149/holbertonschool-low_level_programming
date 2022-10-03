#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
*main - program that prints all single digit numbers of base 10
* starting from 0, followed by a new line.
*
*Return: always 0 at all time
*/

int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
	printf("%d", x);
	}
	printf("\n");
	return (0);
}

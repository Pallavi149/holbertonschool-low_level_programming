#include"main.h"

/**
*print_square - Prints the square
*@size: is the number of times the character \ should be printed
*
*Return: Always 0
*/

void print_square(int size)
{
int p = 0;
int q = 0;

	if (size > 0)
	{
	while (p < size)
	{
	q = 0;
	while (q < size)
	{
	_putchar('#');
	q++;
	}
	_putchar('\n');
	p++;
	}
	}
	else
	_putchar('\n');
}

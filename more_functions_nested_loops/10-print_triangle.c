#include"main.h"

/**
*print_triangle - Prints a triangle
*@size: is the number of times the character # should be printed
*
*Return: Always 0
*/

void print_triangle(int size)
{
int p, q;

	if (size > 0)
	{
	p = size;
	while (p > 0)
	{
	q = 0;
	while (q < size)
	{
	if (q < (p - 1))
	{
	_putchar('.');
	}
	else
	{
	_putchar('#');
	}
	q++;
	}
	_putchar('\n');
	p--;
	}
	}
	else
	_putchar('\n');
}

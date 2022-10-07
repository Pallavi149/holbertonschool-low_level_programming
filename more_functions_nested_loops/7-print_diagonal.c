#include"main.h"

/**
*print_diagonal - draws a diagonal line in the terminal
*@n: is the number of times the character \ should be printed
*
*Return: Always 0
*/

void print_diagonal(int n)
{
int p = 0;
int q = 0;

	if (n > 0)
	{
	while (p < n)
	{
	q = 0;
	while (q <= p)
	{
	if (q == p)
	{
	_putchar('\\');
	}
	else
	{
	_putchar(' ');
	}
	q++;
	}
	_putchar('\n');
	p++;
	}
	}
	else
	_putchar('\n');
}

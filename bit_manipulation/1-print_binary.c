#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: is the unsigned long int
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n >> 1 == 0)
	{
	_putchar((n & 1u) + '0');
		return;
	}
	print_binary(n >> 1);
	_putchar((n & 1u) + '0');
}

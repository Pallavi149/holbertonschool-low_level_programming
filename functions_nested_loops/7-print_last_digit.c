#include"main.h"
/**
*print_last_digit - Prints the last digit of a number
*
*@c: The character to print
*Return: Always return 0
*/

int print_last_digit(int n)
{
	int x;

	if (n < 0)
	  {
	   n = ( n*-1);
	  }
	x = n % 10;
	_putchar(x + '0');
	return (x);
}


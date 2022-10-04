#include"main.h"
/**
*times_table - Prints the 9 times table, starting with 0
*
*Return: void
*/

void times_table(void)
{
	int h, m, o;

	for (h = 0; h <= 9; h++)
	{
		for (m = 0; m <= 9; m++)
		{
		o = h * m;
		if (m > 0 && o / 10 == 0)
		{
			_putchar(' ');
		}
		else if (m > 0)
		{
			_putchar((char) o / 10 + '0');
		}
		_putchar((char) o % 10 + '0');
		if (m < 9)
		{
			_putchar(',');
			_putchar(' ');
		}
		}
	_putchar('\n');
	}
}


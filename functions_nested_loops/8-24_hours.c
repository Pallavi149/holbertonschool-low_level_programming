#include"main.h"
/**
*jack_bauer - Prints every minute of the day
*
*Return: Always return 0
*/

void jack_bauer(void)
{
int h, m;

	for (h = 0; h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
		_putchar((char) h / 10 + '0');
		_putchar((char) h % 10 + '0');
		_putchar(':');
		_putchar((char) m / 10 + '0');
		_putchar((char) m % 10 + '0');
		_putchar('\n');
		}
	}
}


#include"main.h"
/**
 *_print_rev_recursion - Prints a reverse string
 * @s: String
 *Return:Always 0.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
	_putchar('\n');
}

#include<stdio.h>
#include<stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int number;

	if (separator == NULL)
	{
		return;
	}

	va_start(ap, n);

	i = 0;

	while (i < n)
	{
		number = va_arg(ap, int);
		printf("%d", number);
		if (i < n - 1)
		{
			printf("%s", separator);
		}

		i = i + 1;
	}
	printf("\n");
	va_end(ap);
}

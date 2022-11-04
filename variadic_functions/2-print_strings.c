#include<stdio.h>
#include<stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints stringss, followed by a new line
 * @separator: the string to be printed between strings
 * @n: the number of strings passed to the function
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *string;

	va_start(ap, n);

	i = 0;

	while (i < n)
	{
		string = va_arg(ap, char*);
		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}

		i = i + 1;
	}
	printf("\n");
	va_end(ap);
}

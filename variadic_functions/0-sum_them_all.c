#include<stdio.h>
#include<stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all -  returns the sum of all its parameters
 * @n: Constant unsigned integer value
 * Return: 0 if n is equal to 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum;

	if (n == 0)
	{
		return (0);
	}

	va_start(ap, n);

	i = 0;

	sum = 0;
	while (i < n)
	{
		sum = sum + va_arg(ap, int);
		i = i + 1;
	}
	va_end(ap);
	return (sum);
}

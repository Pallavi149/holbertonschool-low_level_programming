#include"main.h"
/**
 *factorial - Returns the factorial of a given number
 * @n: Given number
 *Return:Always 0.
 */
int factorial(int n)
{
	int facto;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		facto = n * factorial(n - 1);
		return (facto);
	}
}

#include"main.h"

/**
 *_prime_recursion - Returns 1 if number is prime 0 if not
 *@x: Given number
 *@y: Starting number
 *Return: Return 1 if number is prime and 0 if not
 */
int _prime_recursion(int x, int y)
{
	if (y == x - 1)
	{
		return (1);
	}
	if (x % y == 0)
	{
		return (0);
	}
	return (_prime_recursion(x, y + 1));
}

/**
 * is_prime_number - Return 1 if input is a prime number
 * @n: Input Number
 * Return: return 1 if number is prime and 0 if not
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (_prime_recursion(n, 2));
}

#include"main.h"

/**
 * _sqrt - Return the square root recursively
 * @x: First Number
 * @y: number to find square root of
 * Return: return the number if it's square root and -1 if not
 */

int _sqrt(int x, int y)
{
	if (x * x == y)
	{
		return (x);
	}
	if (x * x > y)
	{
		return (-1);
	}
	return (_sqrt(x + 1, y));
}

/**
 *_sqrt_recursion - Returns the natural squareroot of a number
 * @n: Given number
 *
 *Return:Always Return the number if it's square root and -1 if not.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(1, n));
}

#include"main.h"
/**
 *_pow_recursion - Returns the value of x raised to the power of y
 * @x: Given number
 * @y: Power of a number
 *Return:Always 0.
 */
int _pow_recursion(int x, int y)
{
	int pow;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		pow = (x * _pow_recursion(x, y - 1));
		return (pow);
	}
}

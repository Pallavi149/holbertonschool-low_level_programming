#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: is the unsigned long int
 * @index: is the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	n = n >> (index);
	return ((n & 1u));
}

/**
 * flip_bits - returns the number of bits to flip to make one number
 * resemble another
 * @n: the number which is flipping
 * @m: the reference number
 * Return: the number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num = 0;
	unsigned int index = 0;

	while (index < 64)
	{
		if (get_bit(n, index) != get_bit(m, index))
		{
			num = num + 1;
		}
		index = index + 1;
	}
	return (num);
}

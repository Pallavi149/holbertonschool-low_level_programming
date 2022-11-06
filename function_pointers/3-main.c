#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - calculation
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int (*f)(int a, int b), result, n2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	n2 = atoi(argv[3]);
	if (n2 == 0 && (f == op_div || f == op_mod))
	{
		printf("Error\n");
		exit(100);
	}
	result = f(atoi(argv[1]), n2);
	printf("%d\n", result);
	return (0);
}

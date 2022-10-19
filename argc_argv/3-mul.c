#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point of a program
 * Return: Always 0
 *@argc: count of the argument supplied to program
 *@argv: an array of pointers to the strings
 */
int main(int argc, char **argv)
{
	int mul;

	if (argc > 2)
	{
		while (argc >= 3)
		{
			mul = atoi(argv[1]) * atoi(argv[2]);
			argc--;
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}

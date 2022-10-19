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
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i = i + 1;
	}
	return (0);
}

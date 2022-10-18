#include<stdio.h>
/**
 * main - Entry point of a program
 * Return: Always 0
 *@argc: count of the argument supplied to program
 *@argv: an array of pointers to the strings
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
	printf("%s\n", *argv);
	}
	return (0);
}

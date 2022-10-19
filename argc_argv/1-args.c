#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point of a program
 * Return: Always 0
 *@argc: count of the argument supplied to program
 *@argv: an array of pointers to the strings
 */
int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}

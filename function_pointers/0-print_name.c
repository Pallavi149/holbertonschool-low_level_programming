#include<stdio.h>
#include<stdlib.h>
#include"function_pointers.h"
/**
 * print_name - Prints a name as is
 * @name: Name of a person
 * @f: Function pointer
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		exit(0);
	}
	f(name);
}

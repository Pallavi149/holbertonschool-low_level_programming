#include<stdio.h>
#include<stdlib.h>
/**
 * is_valid_number - checking the number is valid or not
 *Return: return 0 if number is invalid
 *@str: character array
 */

int is_valid_number(char *str)
{
	while (*str != '\0')
	{
		if ((*str < '0') || (*str > '9'))
		{
			return (0);
		}
		str = str + 1;
	}
	return (1);
}

/**
* main - Adds positive numbers
 * Return: Always 0
 *@argc: count of the argument supplied to program
 *@argv: an array of pointers to the strings
 */
int main(int argc, char **argv)
{
	int sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	argc = argc - 1;
	while (argc > 0)
	{
		if (is_valid_number(argv[argc]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + atoi(argv[argc]);
		argc = argc - 1;
	}
	printf("%d\n", sum);
	return (0);
}

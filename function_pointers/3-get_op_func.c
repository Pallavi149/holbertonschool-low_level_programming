#include<string.h>
#include"3-calc.h"

/**
 **get_op_func - returns a pointer to the function that corresponds
 *to the operator given as a parameter
 *@s: is the operator passed as argument to the program
 *Return: Return the correct function to perform the operation
 **/
int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod}
	};
	i = 0;

	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
		i = i + 1;
	}
	return (NULL);
}

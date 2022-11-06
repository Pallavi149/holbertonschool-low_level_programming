#include<stdio.h>
#include<stdarg.h>


/**
 * _print_all - prints anything, followed by a new line
 * @format: the format of variadic arguments
 * @j: format length
 * @ap: arg list
 * Return: Nothing
 */
void _print_all(const char * const format, int j, va_list ap)
{
	int i, sep;
	char *string;

	i = 0;
	while (i < j)
	{
		sep = 0;
		switch (format[i])
		{
		case 's':
			sep = 1;
			string = va_arg(ap, char*);
			if (string == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", string);
			break;
		case 'i':
			printf("%d", va_arg(ap, int));
			sep = 1;
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			sep = 1;
			break;
		case 'c':
			printf("%c", va_arg(ap, int));
			sep = 1;
			break;
		}
		if (sep == 1 && i < j - 1)
		{
			printf(", ");
		}
		i = i + 1;
	}
}

/**
 * print_all - prints anything, followed by a new line
 * @format: the format of variadic arguments
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int j;

	if (format == NULL)
	{
		printf("\n");
		return;
	}

	j = 0;
	while (format[j] != '\0')
	{
		j = j + 1;
	}
	va_start(ap, format);

	_print_all(format, j, ap);
	printf("\n");
	va_end(ap);
}

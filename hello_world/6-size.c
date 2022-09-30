#include <stdio.h>
#include <string.h>
/**
*main -  print the size of various types on the computer it is compiled
*and run on
*
*Return: always 0 at all time
*/
int main(void)
{
	int intType;
	long int longintType;
	long long int longlongintType;
	char charType;
	float floatType;

	printf("Size of an int: %zu bytes\n", sizeof(intType));
	printf("Size of a float: %zu bytes\n", sizeof(longintType));
	printf("Size of longlongInt: %zu bytes\n", sizeof(longlongintType));
	printf("Size of char: %zu byte\n", sizeof(charType));
	printf("Size of float: %zu byte\n", sizeof(floatType));
	return (0);
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - display the sentence using printf function
*
*Return: always 0 at all time
*/

int main(void)
{
	int n, lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;
	if (lastdigit < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
		       n, lastdigit);
	}
	else
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastdigit);
	}
	return (0);
}

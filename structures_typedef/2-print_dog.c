#include<stdio.h>
#include<stdlib.h>
#include"dog.h"
/**
 *print_dog - Prints a type struct dog
 *@d: pointer to structure dog
  *Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf(" ");
	}
	{
		printf("Name: %s", d->name);
		printf("\nAge: %f", d->age);
		printf("\nOwner: %s\n", d->owner);
	}
}

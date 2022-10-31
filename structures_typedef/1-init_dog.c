#include<stdio.h>
#include<stdlib.h>
#include"dog.h"
/**
 *init_dog - Initializes a variable of type struct dog
 *@d: pointer to structure dog
 *@name: First member of struct dog stores name of the dog
 *@age: Second member of struct dog stores age of the dog
 *@owner: Third member of struct dog stores the name of the dog owner
 *Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

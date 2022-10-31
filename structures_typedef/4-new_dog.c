#include<stdio.h>
#include<stdlib.h>
#include"dog.h"
/**
 *new_dog - Creates a new dog
 *@d: pointer to dog_t
 *@name: Name of the dog
 *@age: Age of the dog
 *@owner: Owner
 *Return: Null if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(*d));
	if (d == NULL)
	{
		free(d);
		return (NULL);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}

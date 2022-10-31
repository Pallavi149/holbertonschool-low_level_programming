#include<stdio.h>
#include<stdlib.h>
#include"dog.h"
/**
 **new_dog - Creates a new dog
 *@d: pointer to structure dog
  *Return: Nothing
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(*d));
	if (d == NULL)
	{
		return (NULL);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}

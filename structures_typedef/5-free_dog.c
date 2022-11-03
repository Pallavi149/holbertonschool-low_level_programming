#include<stdlib.h>
#include"dog.h"

/**
 *new_dog - Creates a new dog
 *@d: pointer to dog_t
 *Return: Nothing
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

	free(d->name);
	free(d->owner);
	free(d);
}

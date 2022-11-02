#include<stdlib.h>
#include"dog.h"

/**
 * *_strdup - returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter
 * @str: Char Pointer
 * Return: Returns a pointer which contains a copy of the string
 *given as a parameter
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int i, strlen;

	strlen = 0;
	if (str == NULL)
	{
		return (NULL);
	}

	while (str[strlen] != '\0')
	{
		strlen = strlen + 1;
	}
	strlen = strlen + 1;
	ptr = (char *)malloc(strlen * sizeof(*ptr));
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < strlen)
	{
		ptr[i] = str[i];
		i = i + 1;
	}
	return (ptr);
}

/**
 *new_dog - Creates a new dog
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
		return (NULL);
	}

	d->age = age;
	d->name = _strdup(name);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = _strdup(owner);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	return (d);
}

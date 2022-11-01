#include<stdlib.h>
#include"dog.h"
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
	char *cname, *cowner;
	int i, j, nlen, olen;

	nlen = 0;
	i = 0;
	while(name[i] != '\0')
	{
		nlen = nlen + 1;
		i = i + 1;
	}

	cname = (char *)malloc(nlen * sizeof(char));
	if (cname == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (name[i] != '\0')
	{
		cname[i] = name[i];
		i = i + 1;
	}

	olen = 0;
	j = 0;
	while(owner[j] != '\0')
	{
		olen =olen + 1;
		j = j + 1;
	}
	cowner = (char *)malloc(olen * sizeof(char));
	if (cowner == NULL)
	{
		free(cname);
		return (NULL);
	}
	j = 0;
	while (owner[j] != '\0')
	{
		cowner[j] = owner[j];
		j = j + 1;
	}

	d = malloc(sizeof(*d));

	if (d == NULL)
	{
		free(cname);
		free(cowner);
		return (NULL);
	}

	d->name = cname;
	d->age = age;
	d->owner = cowner;
	return (d);
}

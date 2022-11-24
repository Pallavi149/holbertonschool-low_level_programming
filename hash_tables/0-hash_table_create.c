#include "hash_tables.h"

/**
 * hash_table_create -  creates a hash table
 * @size:  is the size of the array
 * Return:  a pointer to the newly created hash table
 * Return Null if something went wrong
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(*table));
	if (table == NULL)
	{
		return (NULL);
	}
	table->size = size;
	table->array = malloc(sizeof(table->array) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		table->array[i] = NULL;
		i = i + 1;
	}
	return (table);
}

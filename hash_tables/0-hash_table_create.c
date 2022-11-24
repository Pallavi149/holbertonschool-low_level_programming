#include "hash_tables.h"

/**
 * hash_table_create -  creates a hash table
 * @size:  is the size of the array
 * Return:  a pointer to the newly created hash table
 * Return Null if something went wrong
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	/*hash_node_t *node;*/

	new_table = malloc(sizeof(hash_table_t) * size);
	if (new_table == NULL)
	{
		free(new_table);
		return (NULL);
	}
	/*node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->key = key;
	node->value = value;*/
	return (new_table);
}

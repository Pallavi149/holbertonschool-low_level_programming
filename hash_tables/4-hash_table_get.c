#include <string.h>
#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht:  is the hash table you want to look into
 * @key: is the key you are looking for
 * Return: value of the element, or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *head;
	unsigned long int index;

	if (ht == NULL)
	{
		return (NULL);
	}

	index = key_index((const unsigned char *)key, ht->size);
	head = ht->array[index];

	while (head != NULL)
	{
		if (strcmp(head->key, (const char *)key) == 0)
		{
			return (head->value);
		}
		head = head->next;
	}
	return (NULL);
}

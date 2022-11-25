#include <string.h>
#include "hash_tables.h"

/**
 * search_key - searching the key
 * @head: pointer to hash_node_t
 * @key: is the key
 * Return: if it succeeded return head. If it failed return NULL
 */

hash_node_t *search_key(hash_node_t *head, const char *key)
{
	while (head != NULL)
	{
		if (strcmp(head->key, key) == 0)
		{
			return (head);
		}
		head = head->next;
	}
	return (NULL);
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to struct hash_table_t
 * @key: is the key
 * @value: is the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	hash_node_t *collision;
	hash_node_t *node_with_same_key;
	unsigned long int index;

	if (ht == NULL || strlen(key) == 0)
	{
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);
	collision = ht->array[index];
	node_with_same_key = search_key(collision, key);

	if (node_with_same_key != NULL)
	{
		free(node_with_same_key->value);
		node_with_same_key->value = strdup(value);
		return (1);
	}

	new = malloc(sizeof(*new));
	if (new == NULL)
	{
		return (0);
	}
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = collision;
	ht->array[index] = new;

	return (1);
}

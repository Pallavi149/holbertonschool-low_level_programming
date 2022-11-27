#include <stdio.h>
#include "hash_tables.h"

/**
 * delete_node - delete node from a list
 * @node: is the node
 * Return: Nothing
 */

void delete_node(hash_node_t *node)
{
	if (node != NULL)
	{
		if (node->next != NULL)
		{
			delete_node(node->next);
		}
		free(node->key);
		free(node->value);
		free(node);
	}
}

/**
 * hash_table_delete - Deletes a hash table
 * @ht: is the hash table
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *head;

	if (ht == NULL)
	{
		return;
	}
	i = 0;

	while (i < ht->size)
	{
		head = ht->array[i];
		i = i + 1;
		if (head == NULL)
		{
			continue;
		}
		delete_node(head);
	}
	free(ht->array);
	free(ht);
}

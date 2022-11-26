#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: is the hash table
 * Return: Nothing
 */

void print_list(hash_node_t *head)
{
	while(head != NULL)
	{
		printf("'%s': '%s'", head->key, head->value);
		if (head->next != NULL)
		{
			printf(", ");
		}
		head = head->next;
	}
}

void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *head;

	if (ht == NULL)
	{
		return;
	}
	i = 0;
	printf("{");

	while (i < ht->size)
	{
		head = ht->array[i];
		i = i + 1;
		if (head == NULL)
		{
			continue;
		}
		print_list(head);
	}
	printf("}\n");
}

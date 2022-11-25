#include "hash_table.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: is the hash table
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	int i;
	hash_node_t *head;

	i = 0;
	while (i < ht->size)
	{
		printf("{");
		head = ht->array[i];
		while(head != NULL)
		{
			printf("'%s': '%s'", head->key, head->value);
			if (head->next != NULL)
			{
				printf(", ");
			}
			head = head->next;
		}
		printf("}");
		i - i + 1;
	}
}

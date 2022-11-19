#include "lists.h"

/**
 *insert_dnodeint_at_index - inserts new node at a given position
 *@h: pointer to pointer to head node
 *@idx: index where new node should be add
 *@n: integer data of new node
 *Return: address of new node or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *ptr;
	unsigned int i;

	new_node = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (h == NULL)
	{
		return (new_node);
	}
	ptr = *h;
	i = 0;
	while (ptr->next != NULL && i < (idx))
	{
		ptr = ptr->next;
		i = i + 1;
	}
	if (idx > i)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = ptr;
	if (ptr != NULL)
	{
		new_node->prev = ptr->prev;
		ptr->prev = new_node;
	}
	if (i == 0)
	{
		*(h) = new_node;
	}
	return (new_node);
}

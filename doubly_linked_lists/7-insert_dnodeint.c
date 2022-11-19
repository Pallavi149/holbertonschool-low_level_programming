#include "lists.h"

/**
 *create_node - creates new node a
 *@n: integer data of new node
 *Return: address of new node or NULL if failed
 */
dlistint_t *create_node(int n)
{
	dlistint_t *new_node;

	new_node = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	return (new_node);
}

/**
 *set_links - set node links
 *@node: pointer to node
 *@next: pointer to next node
 *@prev: pointer to previous node
 *Return: nothing
 */
void set_links(dlistint_t *node, dlistint_t *next, dlistint_t *prev)
{
	node->next = next;
	if (prev != NULL)
	{
		node->prev = prev;
		prev->next = node;
	}
	if (next != NULL)
	{
		next->prev = node;
	}
}

/**
 *insert_dnodeint_at_index - inserts new node at a given position
 *@h: pointer to pointer to head node
 *@idx: index where new node should be add
 *@n: integer data of new node
 *Return: address of new node or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *ptr, *prev;
	unsigned int i;

	new_node = create_node(n);
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (*(h) == NULL)
	{
		*(h) = new_node;
		return (new_node);
	}
	ptr = *h;
	i = 0;
	prev = ptr->prev;
	while (ptr != NULL && i < (idx))
	{
		prev = ptr;
		ptr = ptr->next;
		i = i + 1;
	}
	if (idx != (i))
	{
		free(new_node);
		return (NULL);
	}
	set_links(new_node, ptr, prev);

	if (i == 0)
	{
		*(h) = new_node;
	}
	return (new_node);
}

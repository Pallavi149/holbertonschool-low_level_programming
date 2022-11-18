#include"lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: Pointer to dlistint_t
 * @index:  is the index of the node, starting at 0
 * Return: if the node does not exist, return NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}
	temp = head;
	i = 0;
	while (temp != NULL)
	{
		if (i == index)
		{
			return (temp);
		}
		temp = head->next;
		head = temp;
		i = i + 1;
	}
	return (NULL);
	}

#include "lists.h"

/**
 * dlistint_len -  returns the number of elements in a dlistint_t list.
 * @h: Const pointer to dlistint_t list
 * Return: the number of elements of a list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i = i + 1;
	}
	return (i);
}

#include<stdio.h>
#include "lists.h"

/**
 *list_len -  Returns the number of elements of a list_t list
 *@h: Pointer to list_t
 *Return: The number of elements of linked list_t list
 */
size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != 0)
	{
		h = h->next;
		i = i + 1;
	}
	return (i);
}

#include<stdio.h>
#include "lists.h"

/**
 *print_list -  prints all the elements of a list_t list
 *@h: Pointer to list_t
 *Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	int i;

	i = 0;
	while (h != 0)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		i = i + 1;
	}
	return (i);
}

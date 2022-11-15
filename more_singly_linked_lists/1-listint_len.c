#include<stdio.h>
#include"lists.h"
/**
 *listint_len -  Returns the number of elements in a listint_t list
 *@h: pointer to listint_t
 *Return: The number of elements
 */
size_t listint_len(const listint_t *h)
{
	int i;
	const listint_t *tmp;

	i = 0;
	tmp = h;
	if (tmp == NULL)
	{
		return (0);
	}
	while (tmp != NULL)
	{
		tmp = tmp->next;
		i = i + 1;
	}
	return (i);
}

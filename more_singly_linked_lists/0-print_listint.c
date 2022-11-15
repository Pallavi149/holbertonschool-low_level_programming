#include<stdio.h>
#include"lists.h"
/**
 *print_listint -  prints all the elements of a listint_t list
 *@h: pointer to listint_t
 *Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
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
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		i = i + 1;
	}
	return (i);
}

#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: Const pointer to dlistint_t list
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = tmp->next;
		free(tmp);
	}
}

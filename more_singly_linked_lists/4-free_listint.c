#include<stdlib.h>
#include<stddef.h>
#include "lists.h"
/**
 * free_listint -  frees a listint_t list
 *@head: Pointer to structure listint_t
 *Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = tmp->next;
		free(tmp);
	}
}

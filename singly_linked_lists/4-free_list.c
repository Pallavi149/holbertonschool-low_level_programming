#include<stdlib.h>
#include<stddef.h>
#include "lists.h"
/**
 * free_list -  frees a list_t list
 *@head: Pointer to structure list_t
 *Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		free(tmp->str);
		head = tmp->next;
		free(tmp);
	}
}

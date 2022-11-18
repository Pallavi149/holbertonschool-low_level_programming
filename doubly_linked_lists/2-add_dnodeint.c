#include "lists.h"

/**
 * *add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: Pointer to pointer to a dlistint_t list
 * @n: integer data to add to a node
 *Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = (*head);
	newnode->prev = NULL;
	if ((*head) != NULL)
	{
		(*head)->prev = newnode;
	}
	(*head) = newnode;
	return (newnode);
}

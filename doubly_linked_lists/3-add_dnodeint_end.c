#include "lists.h"

/**
 * *add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: Pointer to pointer to a dlistint_t list
 * @n: integer data to add to a node
 *Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *temp;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;
	temp = (*head);
	if ((*head) == NULL)
	{
		newnode->prev = NULL;
		(*head) = newnode;
		return (newnode);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
		temp->next = newnode;
		newnode->prev = temp;
		return (newnode);
}

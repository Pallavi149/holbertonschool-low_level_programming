#include <stdlib.h>
#include"lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of a list
 * @head: Pointer to pointer to a listint_t
 * @index: is the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *currentnode, *nextnode;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}
	currentnode = *head;
	i = 0;
	if (index == 0)
	{
		*head = currentnode->next;
		free(currentnode);
		return (1);
	}
	/* Find previous node of the node to be deleted */
	while (currentnode != NULL && i < (index - 1))
	{
		currentnode = currentnode->next;
		i = i + 1;
	}
	if (currentnode == NULL || currentnode->next == NULL)
	{
		return (-1);
	}
	/* Store pointer to the next of node to be deleted */
	nextnode = currentnode->next->next;
	free(currentnode->next);
	currentnode->next = nextnode;
	return (1);
}

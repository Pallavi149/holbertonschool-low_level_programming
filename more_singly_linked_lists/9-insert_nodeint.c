#include<stdlib.h>
#include"lists.h"

/**
 * *insert_nodeint_at_index - inserts a new node at a given position
 * @head: Pointer to pointer to listint_t
 * @idx: is the index of the list where the new node should be added
 * @n: is the number to be added
 * Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *currentnode;
	unsigned int i;

	newnode = (listint_t *) malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	currentnode = *head;
	if (*head == NULL && idx == 0)
	{
		*head = newnode;
		return (newnode);
	}
	i = 0;
	while (currentnode != NULL)
	{
		if (i == idx - 1)
		{
			newnode->next = currentnode->next;
			currentnode->next = newnode;
			return (newnode);
		}
		currentnode = currentnode->next;
		i = i + 1;
	}
	return (NULL);
}

#include<stdio.h>
#include<stdlib.h>
#include "lists.h"

/**
 *pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 *@head: Pointer to pointer to a listint_t
  *Return: if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
	{
		return (0);
	}
	data = (*head)->n;
	temp = *head;
	*head = temp->next;
	free(temp);
	return (data);
}

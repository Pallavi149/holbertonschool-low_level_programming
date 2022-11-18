#include "lists.h"
/**
 * sum_dlistint -  returns the sum of all the data(n)of a dlistint_t list
 * @head: pointer to dlistint_t
 * Return: if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}

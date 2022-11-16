#include<stdlib.h>
#include"lists.h"

/**
 * sum_listint -  returns the sum of all the data(n)of a listint_t list
 * @head: pointer to listint_t
 * Return: if the list is empty, return 0
 */
int sum_listint(listint_t *head)
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

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "lists.h"

/**
 **add_node_end -  Adds a new node at the end of a list_t
 *@head: Pointer to pointer to a list_t
 *@str: Pointer to string
 *Return:the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	new = (list_t *)malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = _strlen(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (new);
}
/**
*_strlen - swap the length of a string
*@s: string value
*
*Return: Always 0
*/

int _strlen(const char *s)
{
int l = 0;

while (*s != '\0')
{
l++;
s++;
}
return (l);
}

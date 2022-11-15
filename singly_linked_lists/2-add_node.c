#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "lists.h"

/**
 **add_node -  Adds a new node at the beginning of a list_t
 *@head: Pointer to pointer to a list_t
 *@str: Pointer to string
 *Return:the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	ptr = (list_t *)malloc(sizeof(list_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->str = strdup(str);
	ptr->len = _strlen(str);
	ptr->next = *head;
	*head = ptr;
	return (ptr);
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

#include "lists.h"
#include <stdio.h>
/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to list
 * @str: string to add in the node
 *
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
list_t *newnode;
while (str[len])
len++;
newnode = malloc(sizeof(list_t));
if (!newnode)
return (NULL);
newnode->str = strdup(str);
newnode->len = len;
newnode->next = (*head);
(*head) = newnode;
return (*head);
}

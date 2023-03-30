#include "lists.h"
#include <stdlib.h>
/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: pointer to the list
 *
 * Return: returns the number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
	const list_t *doris;
	int count  = 0;
doris = h;
while (doris != NULL)
{
doris = doris->next;
count++;
}
return (count);
}

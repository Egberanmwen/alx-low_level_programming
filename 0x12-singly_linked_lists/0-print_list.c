#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_list - Print all elements of a list_t list
 * @h: Pointer to the first element of the list
 *
 * Return: Number of elements in the list
 */
size_t print_list(const list_t *h)
{
	size_t n;
if (h == NULL)
return (0);
n = 1;
printf("[%d] %s\n", h->len, h->str);
if (h->next != NULL)
n += print_list(h->next);
return (n);
}

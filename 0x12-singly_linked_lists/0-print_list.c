#include "lists.h"
#include <stdio.h>
/**
 * print_list -prints all the elemnts of a linked list
 * @h: pointer to list
 * Return: Number of node to be printed
 */
size_t print_list(const list_t *h)
{
size_t n = 0;
while (h)
{
if (!h->str)
printf("[0] (nil)\n");
else
printf("[%u]%s\n", h->len, h->str);
h = h->next;
n++;
}
return (n);
}

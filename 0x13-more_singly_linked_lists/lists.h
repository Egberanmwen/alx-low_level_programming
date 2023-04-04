#ifndef _LISTS_
#define _LISTS_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
}listint_t;
/**
 * struct listp_s - singly linked list
 * @p: pointers of nodes
 * @next: points to the next node
 *
 * Description: singly linked list of pointers
 */
typedef struct listp_s
{
	void *p;
	struct listp_s *next;
} listp_t;
int _putchar(char c);
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint2(listint_t **head);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
void free_listint(listint_t *head);
listint_t *reverse_listint(listint_t **head);
size_t print_listint_safe(const listint_t *head);
size_t free_listint_safe(listint_t **h);
listint_t *find_listint_loop(listint_t *head);
#endif
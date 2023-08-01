#include "lists.h"

/**
 * print_listint - it will print all the linked list's elements 
 * @h: the linked list of type listint_t will get printed
 *
 * Return: the total number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t m = 0;

	while (h)
	{
		printf("%d\n", h->n);
		m++;
		h = h->next;
	}

	return (m);
}

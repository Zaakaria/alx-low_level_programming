#include "lists.h"

/**
 * print_listint - will print all the element existed in the linked list
 * @h: it is a linked list of type listint_t to be printed
 *
 * Return: the total number of the nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t a = 0;

	while (h)
	{
		printf("%d\n", h->n);
		a++;
		h = h->next;
	}

	return (a);
}


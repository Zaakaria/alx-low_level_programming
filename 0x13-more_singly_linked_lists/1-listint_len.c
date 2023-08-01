#include "lists.h"

/**
 * listint_len - will return the number of linked lists's elements
 * @h: it is a linked list of type listint_t to get traversed
 *
 * Return: the total number of the nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t z = 0;

	while (h)
	{
		z++;
		h = h->next;
	}

	return (z);
}


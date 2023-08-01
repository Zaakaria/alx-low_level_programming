#include "lists.h"

/**
 * listint_len - it will return the total number of linked lists's elements 
 * @h: the linked list of type listint_t to get traversed
 *
 * Return: the total number of the nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t w = 0;

	while (h)
	{
		w++;
		h = h->next;
	}

	return (w);
}

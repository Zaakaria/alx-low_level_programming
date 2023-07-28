#include <stdlib.h>
#include "lists.h"

/**
 * list_len - will returns the total number of the elements in the linked list
 * @h: this will point to the list_t list
 *
 * Return: total number of the elements in h
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}

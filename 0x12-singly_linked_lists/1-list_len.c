#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the elements number in linked list
 * @p: list_t list's pointer 
 *
 * Return: elements number in h
 */
size_t list_len(const list_t *p)
{
	size_t i = 0;

	while (p)
	{
		i++;
		p = p->next;
	}
	return (i);
}

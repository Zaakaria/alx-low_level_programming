#include <stdlib.h>
#include "lists.h"

/**
 * free_list - makes a linked list free
 * @d: list_t list to be set as free
 */
void free_list(list_t *d)
{
	list_t *t;

	while (d)
	{
		t = d->next;
		free(d->str);
		free(d);
		d = t;
	}
}

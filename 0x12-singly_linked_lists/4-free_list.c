#include <stdlib.h>
#include "lists.h"

/**
 * free_list - will free the linked list
 * @head: list_t list to will be set as free
 */
void free_list(list_t *head)
{
	list_t *t;

	while (head)
	{
		t = head->next;
		free(head->str);
		free(head);
		head = t;
	}
}

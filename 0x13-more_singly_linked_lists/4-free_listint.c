#include "lists.h"

/**
 * free_listint - it will make the linked list free
 * @head: it is the listint_t list thats gonna get freed
 */
void free_listint(listint_t *head)
{
	listint_t *u;

	while (head)
	{
		u = head->next;
		free(head);
		head = u;
	}
}

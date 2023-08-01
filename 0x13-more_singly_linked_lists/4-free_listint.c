#include "lists.h"

/**
 * free_listint - it will make the linked list free
 * @head: the listint_t list to be set as free
 */
void free_listint(listint_t *head)
{
	listint_t *b;

	while (head)
	{
		b = head->next;
		free(head);
		head = b;
	}
}

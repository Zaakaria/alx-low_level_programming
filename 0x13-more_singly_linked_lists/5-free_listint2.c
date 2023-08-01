#include "lists.h"

/**
 * free_listint2 - it will make linked list free 
 * @head: it is a pointer to the listint_t list to be set as free
 */
void free_listint2(listint_t **head)
{
	listint_t *n;

	if (head == NULL)
		return;

	while (*head)
	{
		n = (*head)->next;
		free(*head);
		*head = n;
	}

	*head = NULL;
}

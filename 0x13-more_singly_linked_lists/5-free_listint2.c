#include "lists.h"

/**
 * free_listint2 - it will make the linked list free
 * @head: it is a pointer to the listint_t list that needs to get freed
 */
void free_listint2(listint_t **head)
{
	listint_t *i;

	if (head == NULL)
		return;

	while (*head)
	{
		i = (*head)->next;
		free(*head);
		*head = i;
	}

	*head = NULL;
}

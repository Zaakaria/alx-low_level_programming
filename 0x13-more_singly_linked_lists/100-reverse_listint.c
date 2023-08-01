#include "lists.h"

/**
 * reverse_listint - will reverse the whole linked list
 * @head: it is a pointer to the list's first node
 *
 * Return: a pointer to the new list's first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *k = NULL;
	listint_t *l = NULL;

	while (*head)
	{
		l = (*head)->l;
		(*head)->l = k;
		k = *head;
		*head = l;
	}

	*head = k;

	return (*head);
}

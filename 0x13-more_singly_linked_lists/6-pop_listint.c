#include "lists.h"

/**
 * pop_listint - will deletes the linked list's head node
 * @head: it is a pointer to the linked list's first element
 *
 * Return: all the data inside the elements that got deleted, in case the list is empty it will return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *o;
	int p;

	if (!head || !*head)
		return (0);

	p = (*head)->n;
	o = (*head)->next;
	free(*head);
	*head = o;

	return (p);
}

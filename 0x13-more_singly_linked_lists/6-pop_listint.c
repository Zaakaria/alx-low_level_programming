#include "lists.h"

/**
 * pop_listint - it will delete linked list's head node 
 * @head: it is a pointer to the linked list's first element 
 *
 * Return: all the data inside the elements that got deleted, if the list is empty it will return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *a;
	int z;

	if (!head || !*head)
		return (0);

	z = (*head)->n;
	a = (*head)->next;
	free(*head);
	*head = a;

	return (z);
}

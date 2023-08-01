#include "lists.h"

/**
 * add_nodeint - will add a brand new node at the linked list's beginning
 * @head: it is a pointer to first node in list
 * @n: the data that need to be inserted in the new node
 *
 * Return: a pointer to new node, it will return NULL in case it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *e;

	e = malloc(sizeof(listint_t));
	if (!e)
		return (NULL);

	e->n = n;
	e->next = *head;
	*head = e;

	return (e);
}

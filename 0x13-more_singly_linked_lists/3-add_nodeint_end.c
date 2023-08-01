#include "lists.h"

/**
 * add_nodeint_end - it will add the node at the linked list's end
 * @head: it is a pointer to the list's very first element
 * @n: it is a data that need to be inserted in the new element
 *
 * Return: a pointer to new node, in case it fails it will return NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *r;
	listint_t *y = *head;

	r = malloc(sizeof(listint_t));
	if (!r)
		return (NULL);

	r->n = n;
	r->next = NULL;

	if (*head == NULL)
	{
		*head = r;
		return (r);
	}

	while (y->next)
		y = y->next;

	y->next = r;

	return (r);
}

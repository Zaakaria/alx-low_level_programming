#include "lists.h"

/**
 * add_nodeint_end - it will add a brand node at the linked list's end 
 * @head: it is a pointer to the list's first element 
 * @n: it is a data to get inserted in new element
 *
 * Return: a pointer to the new node and if it fails it will return NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *c;
	listint_t *v = *head;

	c = malloc(sizeof(listint_t));
	if (!c)
		return (NULL);

	c->n = n;
	c->next = NULL;

	if (*head == NULL)
	{
		*head = c;
		return (c);
	}

	while (v->next)
		v = v->next;

	v->next = c;

	return (c);
}

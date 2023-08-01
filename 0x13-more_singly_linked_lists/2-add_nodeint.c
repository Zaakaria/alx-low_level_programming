#include "lists.h"

/**
 * add_nodeint - it will add a brand new node at the linked list's beginning 
 * @head: it is a pointer to first node in list
 * @n: it is a data to be inserted in the new node
 *
 * Return: a pointer to the new node, if it fails it will return NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *x;

	x = malloc(sizeof(listint_t));
	if (!x)
		return (NULL);

	x->n = n;
	x->next = *head;
	*head = x;

	return (x);
}

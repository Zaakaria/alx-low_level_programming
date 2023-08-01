#include "lists.h"

/**
 * get_nodeint_at_index - it will return the node at a specific index in the linked list
 * @head: it is the linked list's first node 
 * @index: it is specific index of the node to get returned
 *
 * Return: a pointer to the node that we are looking for, if not existed it will return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int e = 0;
	listint_t *r = head;

	while (r && e < index)
	{
		r = r->next;
		e++;
	}

	return (r ? r : NULL);
}

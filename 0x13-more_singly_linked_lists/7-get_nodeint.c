#include "lists.h"

/**
 * get_nodeint_at_index - it will return the node at a specific index in the linked list
 * @head: it is the linked list's first node
 * @index: it is the index of the node that we want to return
 *
 * Return: a pointer to the node we are looking for, in case there isnt any it will return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int q = 0;
	listint_t *s = head;

	while (s && q < index)
	{
		s = s->next;
		q++;
	}

	return (s ? s : NULL);
}

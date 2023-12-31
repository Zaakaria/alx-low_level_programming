#include "lists.h"

/**
 * get_nodeint_at_index - will return the node at specific index
 * @head: it is the linked list's first node
 * @index: it is the index of the node that we want to return
 *
 * Return: a pointer to node we are searching for, or either NULL
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

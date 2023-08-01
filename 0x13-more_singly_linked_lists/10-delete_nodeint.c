#include "lists.h"

/**
 * delete_nodeint_at_index - it will delete a node in linked list at specific index
 * @head: a pointer to the list's first element 
 * @index: it is index of the node to get deleted
 *
 * Return: 1 for the Success, or -1 if it Fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p = *head;
	listint_t *q = NULL;
	unsigned int s = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(p);
		return (1);
	}

	while (s < index - 1)
	{
		if (!p || !(p->next))
			return (-1);
		p = p->next;
		s++;
	}


	q = p->next;
	p->next = q->next;
	free(q);

	return (1);
}

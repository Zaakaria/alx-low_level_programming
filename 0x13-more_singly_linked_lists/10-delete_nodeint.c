#include "lists.h"

/**
 * delete_nodeint_at_index - will delete the node at specific index
 * @head: a pointer to the list's very first element
 * @index: the index of the node we gonna delete
 *
 * Return: 1 when Success, or -1 when Fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *f = *head;
	listint_t *g = NULL;
	unsigned int j = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(f);
		return (1);
	}

	while (j < index - 1)
	{
		if (!f || !(f->next))
			return (-1);
		f = f->next;
		j++;
	}


	g = f->next;
	f->next = g->next;
	free(g);

	return (1);
}

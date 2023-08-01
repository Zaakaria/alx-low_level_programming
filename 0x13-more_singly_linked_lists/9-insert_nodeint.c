#include "lists.h"

/**
 * insert_nodeint_at_index - it will insert a brand u node in linked list,
 * at a certain position
 * @head: it is a pointer to the first brand node in list
 * @idx: the index of where the u node got added
 * @n: it is the data to be inserted in new node
 *
 * Return: a pointer to the new brand node, or either will return NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *u;
	listint_t *o = *head;

	u = malloc(sizeof(listint_t));
	if (!u || !head)
		return (NULL);

	u->n = n;
	u->next = NULL;

	if (idx == 0)
	{
		u->next = *head;
		*head = u;
		return (u);
	}

	for (j = 0; o && j < idx; j++)
	{
		if (j == idx - 1)
		{
			u->next = o->next;
			o->next = u;
			return (u);
		}
		else
			o = o->next;
	}

	return (NULL);
}

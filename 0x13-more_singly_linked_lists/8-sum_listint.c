#include "lists.h"

/**
 * sum_listint - will calculate the total sum of data
 * @head: it is the linked list's first node
 *
 * Return: the whole sum 
 */
int sum_listint(listint_t *head)
{
	int d = 0;
	listint_t *f = head;

	while (f)
	{
		d+= f->n;
		f = f->next;
	}

	return (d);
}

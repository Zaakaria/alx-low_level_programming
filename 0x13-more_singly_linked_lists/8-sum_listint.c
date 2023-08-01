#include "lists.h"

/**
 * sum_listint - it will calculate the total of data in listint_t list
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

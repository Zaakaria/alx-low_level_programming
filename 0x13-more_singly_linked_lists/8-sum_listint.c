#include "lists.h"

/**
 * sum_listint - it will calculate the sum of all listint_t list's data 
 * @head: it is the first node in linked list
 *
 * Return: the total sum
 */
int sum_listint(listint_t *head)
{
	int t = 0;
	listint_t *y = head;

	while (y)
	{
		t += y->n;
		y = y->next;
	}

	return (t);
}

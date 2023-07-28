#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints elements of linked list
 * @p: list_t list pointer
 *
 * Return: nodes printed num 
 */
size_t print_list(const list_t *p)
{
	size_t a = 0;

	while (p)
	{
		if (!p->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", p->len, p->str);
		p = p->next;
		a++;
	}

	return (a);
}

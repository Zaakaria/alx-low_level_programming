#include <stdio.h>
#include "lists.h"

/**
 * print_list - will print all the elements
 * @h: will point to the list_t list to be printed 
 *
 * Return: the total number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		a++;
	}

	return (a);
}

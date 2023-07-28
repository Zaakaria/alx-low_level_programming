#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds new node in the end of linked list
 * @d: list_t list double pointer 
 * @str: string added in new node
 *
 * Return: new element address, or NULL if fails
 */
list_t *add_node_end(list_t **d, const char *str)
{
	list_t *n;
	list_t *t = *d;
	unsigned int len = 0;

	while (str[len])
		len++;

	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);

	n->str = strdup(str);
	n->len = len;
	n->next = NULL;

	if (*d == NULL)
	{
		*d = n;
		return (n);
	}

	while (t->next)
		t = t->next;

	t->next = n;

	return (n);
}

#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds new node in the beginning of linked list
 * @d: list_t list double pointer 
 * @str: new string added in the node
 *
 * Return: new element address, NULL if fails
 */
list_t *add_node(list_t **d, const char *str)
{
	list_t *n;
	unsigned int length = 0;

	while (str[length])
		length++;

	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);

	n->str = strdup(str);
	n->len = length;
	n->next = (*d);
	(*d) = n;

	return (*d);
}

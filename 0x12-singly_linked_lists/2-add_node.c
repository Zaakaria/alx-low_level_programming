#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - will add a new node at the beginning
 * @head: it is a double pointer to list_t list
 * @str: it is a new string to add in node
 *
 * Return: the new element address , will return NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
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
	n->next = (*head);
	(*head) = n;

	return (*head);
}

#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_singly - singly linked list
 * @str: string 
 * @length: string's length
 * @nxt: point to next node
 *
 */
typedef struct list_s
{
	unsigned int length;
	char *str;
	struct list_singly *next;
} list_t;

size_t list_len(const list_t *p);
list_t *add_node(list_t **d, const char *str);
size_t print_list(const list_t *p);
list_t *add_node_end(list_t **d, const char *str);
void free_list(list_t *d);

#endif

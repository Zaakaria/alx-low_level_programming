#include "main.h"

/**
 * set_bit - will set a bit at an index we give to 1
 * @n: it is a pointer to the number to get changed
 * @index: it is the index of the bit to be set to 1
 *
 * Return: 1 on success, -1 on fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

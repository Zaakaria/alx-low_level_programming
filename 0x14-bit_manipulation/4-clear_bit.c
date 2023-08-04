#include "main.h"

/**
 * clear_bit - will set the value of a bit we give to 0
 * @n: it is a pointer to the number to get changed
 * @index: it is the index of the bit to be cleared
 *
 * Return: 1 on success, -1 on fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

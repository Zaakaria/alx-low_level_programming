#include "main.h"

/**
 * get_bit - will return value of a bit at an index in decimal number
 * @n: it is the number that needs to be searched
 * @index: it is the index of the bit wanted
 *
 * Return: the value of the bit wanted
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int t;

	if (index > 63)
		return (-1);

	t = (n >> index) & 1;

	return (t);
}

#include "main.h"

/**
 * flip_bits - will count the number of bits to get changed
 * @n: it is the very first number
 * @m: it it the second number
 *
 * Return: number of bits to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int y, u = 0;
	unsigned long int i;
	unsigned long int o = n ^ m;

	for (y = 63; y >= 0; y--)
	{
		i = o >> y;
		if (i & 1)
			u++;
	}

	return (u);
}

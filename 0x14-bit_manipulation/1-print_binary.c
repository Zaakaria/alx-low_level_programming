#include "main.h"

/**
 * print_binary - will print binary equivalent of decimal number
 * @n: it is the number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	int e, r = 0;
	unsigned long int current;

	for (e = 63; e >= 0; e--)
	{
		current = n >> i;

		if (current & 1)
		{
			_putchar('1');
			r++;
		}
		else if (r)
			_putchar('0');
	}
	if (!r)
		_putchar('0');
}

#include "main.h"

/**
 * binary_to_uint - will convert binary number to unsigned int
 * @b: it is the string that contain binary number
 *
 * Return: the result converted number we get
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int z = 0;

	if (!b)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		z = 2 * z + (b[a] - '0');
	}

	return (z);
}

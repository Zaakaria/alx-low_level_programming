#include "main.h"
#include <unistd.h>
/**
 * _putchar - it will write character c to stdout
 * @c: it is the character to be printed
 *
 * Return: 1 on succes, and -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

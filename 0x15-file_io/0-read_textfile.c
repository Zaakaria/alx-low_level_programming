#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- will read the txt file print to STDOUT
 * @filename: it is the text file to be read
 * @letters: it is number of letters that needs to be read
 * Return: w- the actual bytes's number read and printed
 *        0 if function fails or the filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *a;
	ssize_t z;
	ssize_t e;
	ssize_t t;

	z = open(filename, O_RDONLY);
	if (z == -1)
		return (0);
	a = malloc(sizeof(char) * letters);
	t = read(z, a, letters);
	e = write(STDOUT_FILENO, a, t);

	free(a);
	close(z);
	return (e);
}

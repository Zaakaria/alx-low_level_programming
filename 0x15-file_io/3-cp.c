#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void close_file(int fd);
char *create_buffer(char *file);

/**
 * create_buffer - will allocate 1024 bytes for buffer
 * @file: it is the name of file buffer is storing chars for
 *
 * Return: a pointer to the brand newly allocated buffer
 */
char *create_buffer(char *file)
{
	char *d;

	d = malloc(sizeof(char) * 1024);

	if (d == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (d);
}

/**
 * close_file - will close the file descriptors
 * @fd: it is the file descriptor to get closed
 */
void close_file(int fd)
{
	int f;

	f = close(fd);

	if (f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - will copie the file's contents to another file.
 * @argc: it is the number of arguments supplied to program
 * @argv: it is an array of pointers to arguments
 *
 * Return: 0 if its success
 *
 * Description: exit code 97 if the argument count is incorrect
 * exit code 98 if file_from does not exist or cant be read
 * exit code 99 if file_to cannot be created or written to
 * exit code 100 if file_to or file_from cant be closed
 */
int main(int argc, char *argv[])
{
	int g, h, r, w;
	char *d;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	d = create_buffer(argv[2]);
	g = open(argv[1], O_RDONLY);
	r = read(g, d, 1024);
	h = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (g == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(d);
			exit(98);
		}

		w = write(h, d, r);
		if (h == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(d);
			exit(99);
		}

		r = read(g, d, 1024);
		h = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(d);
	close_file(g);
	close_file(h);

	return (0);
}

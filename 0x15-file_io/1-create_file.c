#include "main.h"

/**
 * create_file - will create the file
 * @filename: it is a pointer to the file's name to create
 * @text_content: it is a pointer to a string to be wrote to the file
 *
 * Return: -1 if the function fails, 1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int y, u, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	y = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	u = write(y, text_content, i);

	if (y == -1 || u == -1)
		return (-1);

	close(y);

	return (1);
}

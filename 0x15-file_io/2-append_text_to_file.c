#include "main.h"

/**
 * append_text_to_file - will appends text at file's end
 * @filename: pointer to the file's name
 * @text_content: the string to be add to file's end
 *
 * Return: if the function fails or filename is NULL - -1.
 *         if the file doesnt  exist the user lacks write permissions - -1.
 *         otherwise - 1.
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int q, p, s = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (s = 0; text_content[s];)
			s++;
	}

	q = open(filename, O_WRONLY | O_APPEND);
	p = write(q, text_content, s);

	if (q == -1 || p == -1)
		return (-1);

	close(q);

	return (1);
}

#include "main.h"

/**
 * append_text_to_file - will append text at the file's end
 * @filename: it is a pointer to the file's name 
 * @text_content: it is the string to be added to file's end 
 *
 * Return: -1 if it fails, filename NULL, file not exist
 *         1 Otherwise 
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

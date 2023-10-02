#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: A pointer to file to be created
 * @text_content: the pointer to string to write file
 *
 * Return: function fails - -1 else, otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fld, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fld = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fld, text_content, len);

	if (fld == -1 || w == -1)
		return (-1);

	close(fld);

	return (1);
}

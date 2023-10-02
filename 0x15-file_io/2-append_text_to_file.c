#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: pointer to file name
 * @text_content: string added to the end of the file.
 *
 * Return: function fails or filename NULL - -1.
 *         file does not exist, user lacks write permissions - -1.
 *         ele - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	w = write(op, text_content, len);

	if (op == -1 || w == -1)
		return (-1);

	close(op);

	return (1);
}

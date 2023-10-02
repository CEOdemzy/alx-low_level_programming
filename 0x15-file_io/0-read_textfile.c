#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- function that reads a text file and prints it to the output
 * @filename:the  text file read
 * @letters: the number of letters read
 * Return: 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fld;
	ssize_t w;
	ssize_t t;

	fld = open(filename, O_RDONLY);
	if (fld == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	t = read(fld, buff, letters);
	w = write(STDOUT_FILENO, buff, t);

	free(buff);
	close(fld);
	return (w);
}

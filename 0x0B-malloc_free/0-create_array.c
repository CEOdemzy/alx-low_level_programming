#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - a function that creates char
 * @size: size of array
 * @c: character to store array
 * Return: a pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *arrc;

	if (size == 0)
		return (NULL);
	arrc = malloc(sizeof(char) * size);
	if (arrc == NULL)
		return (NULL);

	x = 0;

	while (x < size)
	{
		arrc[x] = c;
		x++;
	}

	return (arrc);
}

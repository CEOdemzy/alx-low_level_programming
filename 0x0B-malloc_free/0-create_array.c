#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - a function that creates char
 * @size: size of array
 * @c: character to store array
 * Return: a pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *arrc = malloc(size);

	if (size == 0 || arrc == 0)
		return (NULL);

	while (size--)
		arrc[size] = c;
	return (arrc);
}

#include "main.h"

/**
 * binary_to_uint - function that converts binary number to unsigned int
 * @b: string pointer for binary number
 *
 * Return: unsigned int, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int numb;

	numb = 0;
	if (!b)
		return (0);
	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
	}
	for (x = 0; b[x] != '\0'; x++)
	{
		numb <<= 1;
		if (b[x] == '1')
			numb += 1;
	}
	return (numb);
}

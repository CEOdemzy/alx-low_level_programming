#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: the numbers to be set
 * @index: the index to set bit
 *
 * Return: 1 on success, or -1 for error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setb;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	setb = 1 << index;
	*n = *n | setb;
	return (1);
}

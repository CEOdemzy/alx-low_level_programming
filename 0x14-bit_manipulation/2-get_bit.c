#include"main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number to check bits in use
 * @index: index at which to check bit in use
 *
 * Return: value of the bit, or -1 for error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int diviso, chec;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	diviso = 1 << index;
	chec = n & diviso;
	if (chec == diviso)
		return (1);
	return (0);
}

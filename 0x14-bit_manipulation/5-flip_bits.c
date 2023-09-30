#include "main.h"

/**
 * flip_bits -  function that returns the number of bits flip numbers
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, countb = 0;
	unsigned long int curt;
	unsigned long int exclusive = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		curt = exclusive >> x;
		if (curt & 1)
			countb++;
	}

	return (countb);
}

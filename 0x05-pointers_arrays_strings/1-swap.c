#include "main.h"


/**
 * swap_int - swaps value of two integers.
 * @a: int a
 * @b: int b
 *
 * Return void.
 */

void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
